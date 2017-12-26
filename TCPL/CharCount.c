/*
* Chapter 1
* Section 1.5
*/

#include<stdio.h>

//Count the characters in the command line

main() {

/*
  long nc;
  nc = 0;

  while (getchar() != EOF) {
    ++nc;
    printf("%1d\n", nc);
  } */
  // same application but using floats and double

  double nc2;

  for(nc2 = 0; getchar() != EOF; ++nc2){
    printf("%.0f\n", nc2 );
  }
}
