#include<stdio.h>
//count the lines from the CMD line
mian(){

  int c, nl;
  nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
        ++nl;
        printf("%d\n", nl );
    }
  }
}
