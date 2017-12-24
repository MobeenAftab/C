#include<stdio.h>
/*Take the users input and print it out*/
main() {

  int c;

  while((c = getchar()) != EOF) {
    putchar(c);
    //c = getchar();
  }
}
