#include<stdio.h>

/*
* Print fahrenheit-celsius table for
* fhar = 0, 20, .... 200
*/

main() {

  float fahr, celsius;
  int lower, upper, step;
  int fahr2;

  lower = 0; // lower the limit of temprature table
  upper = 300; // upper limitt
  step = 20; // step increment size

  printf("fahrenheit-celsius Table\n");

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f \t %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  /*Doing the same with a for loop - notice the
  Lower number of variables declared but attaining
  the same result*/
printf("\n For loop Table \n");
  for(fahr2 = 0; fahr2 <=300; fahr2 = fahr2 +20) {
    printf("%3d\t%6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));
  }

  /*Now doing the same as above but in reverse*/
  printf("\n Reverse Order \n");
    for(fahr2 = 300; fahr2 !=-20; fahr2 = fahr2 -20) {
      printf("%3d\t%6.1f\n", fahr2, (5.0/9.0)*(fahr2-32));
  }
}
