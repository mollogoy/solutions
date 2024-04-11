#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

string encipher(string plain_text, string key);

int main(int argc, string argv[]) {
    //string key = "YTNSHKVEFXRBAUQZCLWDMIPGJO";
    if (argc != 2) {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for (int i = 0; i < argc; i++) {
        if (isalpha(argv[1][i]) == 0) {
            printf("Usage: ./substitution k1ey\n");
            return 1;
        }
    }
    if (strlen(argv[1]) < 26) {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    int counter = strlen(argv[1]);
    for (int i = 0; i < counter - 1; i++) {
        for (int j = i + 1; j < counter; j++) {
            if (argv[1][i] == argv[1][j]) {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }
    string key = argv[1];
    string plain_text = get_string("plaintext:  ");
    string cipher = encipher(plain_text, key);
    printf("ciphertext: %s\n", cipher);
    return 0;
}

string encipher(string plain_text, string key) {
    char alpha_index_upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char alpha_index_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    struct dict_t {
        int key;
        int value;
    } dicts_upper[26], dicts_lower[26];
    for (int x = 0; x<26; x++) {
        dicts_upper[x].key = alpha_index_upper[x];
    }
    for (int y = 0; y<26; y++) {
        dicts_lower[y].key = alpha_index_lower[y];
    }
    for (int z = 0; z < 26; z++) {
        dicts_lower[z].value = tolower(key[z]);
        dicts_upper[z].value = toupper(key[z]);
    }
    string cipher_text = plain_text;
    for (int i = 0, is = strlen(cipher_text); i < is; i++) {
        if (isalpha(cipher_text[i])) {
            if isupper(cipher_text[i]) {
                for (int n = 0; n < 26; n++) {
                    if (cipher_text[i] == dicts_upper[n].key) {
                        cipher_text[i] = dicts_upper[n].value;
                        break;
                    }
                }
            } else {
                for (int m = 0; m < 26; m++) {
                    if (cipher_text[i] == dicts_lower[m].key) {
                        cipher_text[i] = dicts_lower[m].value;
                        break;
                    }
                }
            }
        }
    }
    return cipher_text;
}
