#include <stdio.h>
#include <cs50.h>
int get_height(void);
void print_spaces(int number_of_spaces);
void print_hashes(int number_of_hashes);
void print_gap(void);
int main(void) {
    int number = get_height();
    int counter_spaces = number;
    for (int y = 0; y<number; y++) {
        print_spaces(counter_spaces);
        counter_spaces--;
        print_hashes(y+1);
        print_gap();
        print_hashes(y+1);
       printf("\n");
    }
    return 0;
}
int get_height(void) {
    int number;
    do {
        number = get_int("Size: ");
    } while (number<1 || number>8);
    return number;
}
void print_spaces(int number_of_spaces) {
    for (int n = 0; n<number_of_spaces; n++) {
        printf(" ");
    }
}
void print_hashes(int number_of_hashes) {
    for (int n = 0; n<number_of_hashes; n++) {
        printf("#");
    }
}
void print_gap(void) {
    printf("  ");
}
