/*
 * Program to ecardValueuate face cardValueues.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  char cardName[3];
  int cardValue = 0;
  int count = 0;
  do {
    puts("Enter the card name: ");
    scanf("%2s", cardName);
    switch (cardName[0]) {
    case 'K':
    case 'Q':
    case 'J': {
      cardValue = 10;
      break;
    } // Case K, Q and J
    case 'A': {
      cardValue = 11;
      break;
    } // Case A
    case 'X': {

      /*
       * Jump to next count on do...while loop, in this case will end the
       * program.
       */
      continue;
    } // Case X
    default: { cardValue = atoi(cardName); }

      /*
       * If card number is incardValueid, like 0 or less and 10 or high
       * On this case, program will jump to next do...while loop
       */
      if ((cardValue < 1) || (cardValue > 10)) {
        puts("I don't understand that cardValueue!");
        continue;
      } // if cardValue < 1 and > 10
    }   // case isn't J, Q, K, A and X cardValueue

    /* Check if the cardValueue is 3 to 6 */
    if ((cardValue >= 3) && (cardValue <= 6)) {
      count++;
    } else if (cardValue == 10) {
      count--;
    } // Otherwise check if the card was 10, J, Q or K
    printf("Current count: %i\n", count);
  } while (cardName[0] != 'X');
  return 0;
}