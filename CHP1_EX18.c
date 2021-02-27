#include <stdio.h>
#define IN 1
#define OUT 0

/* A program to count number of characters, lines and words */

main()


{


	int c, nc, wc, nl, state;

	nc = wc = nl = 0;
	state = OUT;

	while((c = getchar()) != EOF){
		++nc;
		if(c == '\n')
			++nl;
		if(c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if(state == OUT){
			++wc;
			state = IN;
		     }	
	}

	printf("Number of characters:%d\nNumber of words:%d\nNumber of lines:%d\n", nc, wc, nl);

}


	
	
