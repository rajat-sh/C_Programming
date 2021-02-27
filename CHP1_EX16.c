#include <stdio.h>
#define IN 1   /* represents a state of in the blank */
#define OUT 0 /* represents a state of not in the blank */


/* A program that copies its input to its output, replacing more than one consecutive blanks with a single blank */


main()


{


	int c;
	int state;
	
	state = 0; 

	while((c = getchar()) != EOF){
		if (c == ' ' && state == OUT){
			putchar(c);
			state = IN;
		}
		if (c != ' '){
			state = OUT;
			putchar(c);
		}
		
	}

}
