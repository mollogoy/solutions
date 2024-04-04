#include <stdio.h>
#include <cs50.h>

int get_cash(void);
int dimes(int cash);
int quarters(int cash);
int nickels(int cash);
int pennies(int cash);

int main(void) {
    int cash_owed = get_cash();

    int quarters_owed = quarters(cash_owed);
    cash_owed -= quarters_owed * 25;

    int dimes_owed = dimes(cash_owed);
    cash_owed -= dimes_owed * 10;

    int nickels_owed = nickels(cash_owed);
    cash_owed -= nickels_owed * 5;

    int pennies_owed = pennies(cash_owed);
    cash_owed -= pennies_owed * 1;


    printf("%i\n", quarters_owed+dimes_owed+nickels_owed+pennies_owed);

    return 0;
}
int get_cash(void) {
    int cash_owed;
    do {
        cash_owed = get_int("Cash owed: ");
    }
    while (cash_owed<0);
    return cash_owed;
}
int quarters(int cash) {
    int quart = 0;
    while (cash>=25) {
        quart++;
        cash -= 25;
    }
    return quart;
}
int dimes(int cash) {
    int dime = 0;
    while (cash>=10) {
        dime++;
        cash -= 10;
    }
    return dime;
}
int nickels(int cash) {
    int nickels = 0;
    while(cash>=5) {
        nickels++;
        cash -= 5;
    }
    return nickels;
}
int pennies(int cash) {
    int pennies = 0;
    while(cash>=1) {
        pennies++;
        cash -= 1;
    }
    return pennies;
}
