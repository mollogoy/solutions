#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

#define NUM(a) (sizeof(a) / sizeof(*a))
long get_first_2_digits(long input);
long get_first_1_digit(long input);
int checksum_part1(long credit_card);
int checksum_part2(long credit_card);
int calculate_digits(long credit_card);
int checksum_part3(long credit_card);
void check_mastercard(long credit_card);
void check_amex(long credit_card);
void check_visa(long credit_card);

int main(void) {
    long credit_card = get_long("Number: ");
    //amex 378282246310005
    //mastercard 2223016768739313
    //visa 4012888888881881
    int true_or_false = checksum_part3(credit_card);
    if (true_or_false) {
        printf("INVALID\n");
    } else {
        check_mastercard(credit_card);
        check_amex(credit_card);
        check_visa(credit_card);
        printf("Other...\n");
    }
}

long get_first_2_digits(long input)
{
    long local = input;

    while (local >= 100)
    {
        local /= 10;
    }

    return local;
}

long get_first_1_digit(long input)
{
    long first = input;
    while(first >= 10)
    {
        first = first / 10;
    }
    return first;
}

int calculate_digits(long credit_card) {
    int counter = 0;
    while(credit_card>0){
        counter++;
        credit_card /= 10;
    }
    return counter;
}

int checksum_part1(long credit_card) {
    int digits[8];
    long cardNum = credit_card;
    cardNum /= 10;
    for (int i = 0; i < 8; ++i)
    {
        digits[i] = cardNum % 10;
        cardNum /= 100;
    }
    int result1 = 0;
    for(int loop = 0; loop < NUM(digits); loop++ ){
        int digits_loop = digits[loop]*2;
        if (digits_loop >= 10 && digits_loop <= 99) {
            int num = digits_loop;
            while(num > 0) {
                int mod = num % 10;
                result1 += mod;
                num = num / 10;
            }
        } else {
            result1 += digits[loop]*2;
        }

    }
    return result1;
}

int checksum_part2(long credit_card) {
    int digits[8];
    long cardNum = credit_card;
    for (int i = 0; i < 8; ++i)
    {
        digits[i] = cardNum % 10;
        cardNum /= 100;
    }
    int result1 = 0;
    for(int loop = 0; loop < NUM(digits); loop++ ){
        result1 += digits[loop];

    }
    return result1;
}

int checksum_part3(long credit_card) {
    int first_result = checksum_part1(credit_card);
    int second_result = checksum_part2(credit_card);
    int odd_or_not = first_result+second_result;
    int number = odd_or_not%10;
    return number;
}

void check_mastercard(long credit_card) {
    int number_of_digits = calculate_digits(credit_card);
    int first_two_digits = get_first_2_digits(credit_card);
    if (number_of_digits == 16) {
        if (first_two_digits == 51 || first_two_digits == 52 || first_two_digits == 53 || first_two_digits == 54 || first_two_digits == 55) {
            printf("MASTERCARD\n");
            exit(0);
        }
    };
}

void check_amex(long credit_card) {
    int number_of_digits = calculate_digits(credit_card);
    int first_two_digits = get_first_2_digits(credit_card);
    if (number_of_digits == 15) {
        if (first_two_digits == 34 || first_two_digits == 37) {
            printf("AMEX\n");
            exit(0);
        }
    };
}

void check_visa(long credit_card) {
    int number_of_digits = calculate_digits(credit_card);
    int first_digit = get_first_1_digit(credit_card);
    if (number_of_digits == 16 || number_of_digits == 13) {
        if (first_digit == 4) {
            printf("VISA\n");
            exit(0);
        }
    };
}
