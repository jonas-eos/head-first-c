/*
 * Program to evaluate face values.
 * Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int val = 0;
  int count = 0;
  do {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    switch (card_name[0]) {
    case 'K':
    case 'Q':
    case 'J': {
      val = 10;
      break;
    } // Case K, Q and J
    case 'A': {
      val = 11;
      break;
    } // Case A
    case 'X': {

      /*
       * Jump to next count on do...while loop, in this case will end the
       * program.
       */
      continue;
    } // Case X
    default: { val = atoi(card_name); }

      /*
       * If card number is invalid, like 0 or less and 10 or high
       * On this case, program will jump to next do...while loop
       */
      if ((val < 1) || (val > 10)) {
        puts("I don't understand that value!");
        continue;
      } // if val < 1 and > 10
    }   // case isn't J, Q, K, A and X value

    /* Check if the value is 3 to 6 */
    if ((val >= 3) && (val <= 6)) {
      count++;
    } else if (val == 10) { // Otherwise check if the card was 10, J, Q or K
      count--;
    }
    printf("Current count: %i\n", count);
  } while (card_name[0] != 'X');
  return 0;
}