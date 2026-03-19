//
// Created by Hbomb on 3/18/2026.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        enum suit {
            DIAMONDS,
            SPADES,
            HEARTS,
            CLUBS,
        } suit;

        enum color {
            RED,
            BLACK,
        } color;

        int value;
    } Card;

    Card deck[32];

    int position = 0;
    int amountOfSuits = 4;
    int amountOfValues = 8;

    for (int i = 0; i <= amountOfSuits; i++) {
        for (int j = 1; j <= amountOfValues; j++) {
            deck[position].suit = (enum suit) i;
            deck[position].value = j - 1;
            if (i == DIAMONDS || i == HEARTS) {
                deck[position].color = RED;
            } else {
                deck[position].color = BLACK;
            }
            position++;
        }
    }

    const char *suitNames[] = {"DIAMONDS", "SPADES", "HEARTS", "CLUBS"};
    const char *colorNames[] = {"RED", "BLACK"};
    const char *valueNames[] = {"7", "8", "9", "10", "JACK", "QUEEN", "KING", "ACE"};


    for (int i = 0; i < 32; i++) {
        printf("%s %s %s\n", colorNames[deck[i].color], suitNames[deck[i].suit], valueNames[deck[i].value]);
    }

    return 0;
}
