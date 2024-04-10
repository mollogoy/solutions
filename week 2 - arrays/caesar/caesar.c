#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string encipher(string plain_text, int key);

int main(int argc, string argv[]) {
    if (argc != 2) {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    int key = atoi(argv[1]);
    if (key <= 0) {
        printf("Usage: ./ceasar key\n");
        return 1;
    }
    string plain_text = get_string("plaintext:  ");
    string cipher = encipher(plain_text, key);
    printf("ciphertext: %s\n", cipher);
    return 0;
}

string encipher(string plain_text, int key) {
    char alpha_index_upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char alpha_index_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    string cipher_text = plain_text;
    for (int i = 0, size = strlen(cipher_text); i < size; i++) {
        if (isalpha(cipher_text[i])) {
            if (isupper(cipher_text[i])) {
               int r_n;
               for (int c = 0; c < 26; c++) {
                    if (cipher_text[i] == alpha_index_upper[c]) {
                        r_n = c;
                    }
               }
               char first = alpha_index_upper[(r_n+key)%26];
               cipher_text[i] = first;
            }
            if (islower(cipher_text[i])) {
                int r_m;
                for (int c = 0; c < 26; c++) {
                    if (cipher_text[i] == alpha_index_lower[c]) {
                        r_m = c;
                    }
                }
                char second = alpha_index_lower[(r_m+key)%26];
                cipher_text[i] = second;
            }
        }
    }
    return cipher_text;
}
