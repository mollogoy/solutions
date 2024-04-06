#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main() {
    string player_1 = get_string("Player 1: ");
    string player_2 = get_string("Player 2: ");
    int points = 0;
    int another_points = 0;
    for (int c = 0; c < strlen(player_1); c++) {
        if (player_1[c] == 'A' || player_1[c] == 'a') {
            points++;
        }
        if (player_1[c] == 'B' || player_1[c] == 'b') {
            points += 3;
        }
        if (player_1[c] == 'C' || player_1[c] == 'c') {
            points += 3;
        }
        if (player_1[c] == 'D' || player_1[c] == 'd') {
            points += 2;
        }
        if (player_1[c] == 'E' || player_1[c] == 'e') {
            points++;
        }
        if (player_1[c] == 'F' || player_1[c] == 'f') {
            points += 4;
        }
        if (player_1[c] == 'G' || player_1[c] == 'g') {
            points += 2;
        }
        if (player_1[c] == 'H' || player_1[c] == 'h') {
            points += 4;
        }
        if (player_1[c] == 'I' || player_1[c] == 'i') {
            points++;
        }
        if (player_1[c] == 'J' || player_1[c] == 'j') {
            points += 8;
        }
        if (player_1[c] == 'K' || player_1[c] == 'k') {
            points += 5;
        }
        if (player_1[c] == 'L' || player_1[c] == 'l') {
            points++;
        }
        if (player_1[c] == 'M' || player_1[c] == 'm') {
            points += 3;
        }
        if (player_1[c] == 'N' || player_1[c] == 'n') {
            points++;
        }
        if (player_1[c] == 'O' || player_1[c] == 'o') {
            points++;
        }
        if (player_1[c] == 'P' || player_1[c] == 'p') {
            points += 3;
        }
        if (player_1[c] == 'Q' || player_1[c] == 'q') {
            points += 10;
        }
        if (player_1[c] == 'R' || player_1[c] == 'r') {
            points++;
        }
        if (player_1[c] == 'S' || player_1[c] == 's') {
            points++;
        }
        if (player_1[c] == 'T' || player_1[c] == 't') {
            points++;
        }
        if (player_1[c] == 'U' || player_1[c] == 'u') {
            points++;
        }
        if (player_1[c] == 'V' || player_1[c] == 'v') {
            points += 4;
        }
        if (player_1[c] == 'W' || player_1[c] == 'w') {
            points += 4;
        }
        if (player_1[c] == 'X' || player_1[c] == 'x') {
            points += 8;
        }
        if (player_1[c] == 'Y' || player_1[c] == 'y') {
            points += 4;
        }
        if (player_1[c] == 'Z' || player_1[c] == 'Z') {
            points += 10;
        }

    }
    for (int x = 0; x < strlen(player_2); x++) {
        if (player_2[x] == 'A' || player_2[x] == 'a') {
            another_points++;
        }
        if (player_2[x] == 'B' || player_2[x] == 'b') {
            another_points += 3;
        }
        if (player_2[x] == 'C' || player_2[x] == 'c') {
            another_points += 3;
        }
        if (player_2[x] == 'D' || player_2[x] == 'd') {
            another_points += 2;
        }
        if (player_2[x] == 'E' || player_2[x] == 'e') {
            another_points++;
        }
        if (player_2[x] == 'F' || player_2[x] == 'f') {
            another_points += 4;
        }
        if (player_2[x] == 'G' || player_2[x] == 'g') {
            another_points += 2;
        }
        if (player_2[x] == 'H' || player_2[x] == 'h') {
            another_points += 4;
        }
        if (player_2[x] == 'I' || player_2[x] == 'i') {
            another_points++;
        }
        if (player_2[x] == 'J' || player_2[x] == 'j') {
            another_points += 8;
        }
        if (player_2[x] == 'K' || player_2[x] == 'k') {
            another_points += 5;
        }
        if (player_2[x] == 'L' || player_2[x] == 'l') {
            another_points++;
        }
        if (player_2[x] == 'M' || player_2[x] == 'm') {
            another_points += 3;
        }
        if (player_2[x] == 'N' || player_2[x] == 'n') {
            another_points++;
        }
        if (player_2[x] == 'O' || player_2[x] == 'o') {
            another_points++;
        }
        if (player_2[x] == 'P' || player_2[x] == 'p') {
            another_points += 3;
        }
        if (player_2[x] == 'Q' || player_2[x] == 'q') {
            another_points += 10;
        }
        if (player_2[x] == 'R' || player_2[x] == 'r') {
            another_points++;
        }
        if (player_2[x] == 'S' || player_2[x] == 's') {
            another_points++;
        }
        if (player_2[x] == 'T' || player_2[x] == 't') {
            another_points++;
        }
        if (player_2[x] == 'U' || player_2[x] == 'u') {
            another_points++;
        }
        if (player_2[x] == 'V' || player_2[x] == 'v') {
            another_points += 4;
        }
        if (player_2[x] == 'W' || player_2[x] == 'w') {
            another_points += 4;
        }
        if (player_2[x] == 'X' || player_2[x] == 'x') {
            another_points += 8;
        }
        if (player_2[x] == 'Y' || player_2[x] == 'y') {
            another_points += 4;
        }
        if (player_2[x] == 'Z' || player_2[x] == 'Z') {
            another_points += 10;
        }

    }
    if (points > another_points) {
        printf("Player 1 Wins!\n");
    } else if (another_points > points) {
        printf("Player 2 Wins\n");
    } else {
        printf("Tie!\n");
    }
}
