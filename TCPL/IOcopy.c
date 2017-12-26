/*
* Chapter 1
* Section 1.5
* Exercise 1.6, 1.7
*/

#include<stdio.h>

/* Take the users input and print it out */

main() {

  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
    // Print ASCII value of input character
    // printf("%d \n ASCII: ", c);
    // EOF will not return any value other than -1
    // printf("%d \n EOF: ", EOF);
    // printf("\n");
  }
}
