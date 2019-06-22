/*
 * Program that show what is the greatest number informed.
 * Released without license.
 * (c) 2019 Jonas Evangelista */
#include <stdio.h>

/* Show which is the greatest number, comparing value1 with value2
 * Returns an int value, this function takes two arguments:
 * @__value1 and __value2, both arguments are ints.
 */
int larger(int __value1, int __value2) {
  if (__value1 > __value2) {
    return __value1;
  }
  return __value2;
}

/*----------------------------------------------------------------------------*/
int main() {

  // Calling the larger function here
  int greatest = larger(100, 1000);
  printf("%i is the greatest!\n", greatest);
  return 0;
}