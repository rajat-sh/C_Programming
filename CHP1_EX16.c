#include <stdio.h>

/* A program to copy input to output, replacing each string of one or more blanks by a single blank */



main()


{


	int c;
	int state;
	
	state = 0; 

	while((c = getchar()) != EOF){
		if (c == ' ' && state == 0){
			putchar(c);
			state = 1;
		}
		if (c != ' '){
			state = 0;
			putchar(c);
		}
		
	}

}
	
