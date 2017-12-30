/*
* Chapter 1
* Section 1.5.3
* Exercise 1.8, 1.9, 1.10
*/

#include <stdio.h>

//counting new lines from inputs in c

int main() {

	int c, nl;
	nl = 0;
	
	// Ex 1.8 - Count newline, tabs and blanks
	while((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			++nl;
			printf("%d\n", nl);
		}
	}
	/*
	// Ex 1.9 - Replace trailing blank by single blank
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			++nl;
			if (c == ' ' && nl > 1) {
				putchar(' ');
				nl = 0;
			}
		} else {
			putchar(c);
		}
	}

	// Ex 1.10 - Replace tabs, blanks and backlash
	// by their string lieral representations

	while((c = getchar()) != EOF) {
		if (c == ' ') {
			printf("\\b");
		} else if (c == '\t') {
			printf("\\t");
		} else if (c == '\\') {
			printf("\\\\");
		} else {
			putchar(c);
		}
	} 
	*/
}