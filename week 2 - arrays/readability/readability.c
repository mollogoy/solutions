#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int number_of_sentences(string words);
int total_number_of_letters(string words);
int number_of_words(string words);
float average_number_of_letters_per_100_words(int number_of_letters, int number_of_words);
float average_number_of_sentences_per_100_words(int number_of_sentences, int number_of_words);

int main(void) {
    string words = get_string("Text: ");
    int number_letters = total_number_of_letters(words);
    int number_words = number_of_words(words);
    int number_sentences = number_of_sentences(words);

    float av = average_number_of_letters_per_100_words(number_letters, number_words);
    float as = average_number_of_sentences_per_100_words(number_sentences, number_words);
    float index = 0.0588 * av - 0.296 * as - 15.8;
    int result = (int) round(index);
    if (result < 1) {
        printf("Before Grade 1\n");
    } else if (result > 16) {
        printf("Grade 16+\n");
    } else {
        printf("Grade %i\n", result);
    }
    return 0;
}

int total_number_of_letters(string words) {
    int c = 0;
    while (words[c] != '\0') {
        c++;
    }
    for (int i = 0, size = strlen(words); i<size; i++) {
        int integer = (int) words[i];
        if (integer == 32 || integer == 39 || integer == 63 || integer == 46 || integer == 33 || integer == 44) {
            c -= 1;
        }
    }
    return c;
}
int number_of_words(string words) {
    int c = 0;
    for (int i = 0, size = strlen(words); i<size; i++) {
        int integer = (int) words[i];
        if (integer == 32) {
            c++;
        }
    }
    return c+1;
}
int number_of_sentences(string words) {
    int c = 0;
    for (int i = 0, size = strlen(words); i<size; i++) {
        int integer = (int) words[i];
        if (integer == 63 || integer == 46 || integer == 33) {
            c++;
        }
    }
    return c;
}

float average_number_of_letters_per_100_words(int number_of_letters, int number_of_words) {
    return (float) number_of_letters / (float) number_of_words * 100.0;
}
float average_number_of_sentences_per_100_words(int number_of_sentences, int number_of_words) {
    return (float) number_of_sentences / (float) number_of_words * 100.0;
}
