#include <cs50.h>
#include <stdio.h>

void print_rows(int number_of_rows, int spaces);
int get_height(void);
int main(void) {
  int number = get_height();
  int counter = number;
  for (int n = 0; n < number; n++) {
    print_rows(n + 1, counter);
    counter--;
  }
  return 0;
}
void print_rows(int number_of_rows, int spaces) {
  for (int n = spaces; n > 0; n--) {
    printf(" ");
  }
  for (int y = 0; y < number_of_rows; y++) {
    printf("#");
  }
  printf("\n");
}

int get_height(void) {
  int number;
  do {
    number = get_int("Size: ");
  } while (number < 1 || number > 8);
  return number;
}
