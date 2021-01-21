#include <stdio.h>

#define  IN 1  /* sate to represent "in word" */
#define OUT 0  /* state to represent "out of word" */

/* A program to count the number of characters, newlines and words */



main()


{


	int c, nc, wc, nl, state;
	
	nc = nl = wc = 0;

	state = OUT;

	while ( ( c = getchar() )  != EOF )
	{
		++nc;
		if ( c == '\n' )
			++nl;
		if ( c == ' ' || c == '\n' || c == '\t' )
			state = OUT;
		else if ( state == OUT )
		{
			++wc;
			state = IN;
		}

	}
	
	printf ( "Character Count: %d\nWord Count:%d\nNew line Count:%d\n" , nc, wc, nl );


	


}

