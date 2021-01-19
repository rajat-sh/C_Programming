#include <stdio.h>

/* A program to copy input to output, replacing each string of one or more blanks by a single blank */



main()


{


	int c, blank;

	blank = 0;
	
	while ( ( c = getchar() ) != EOF )
	{	

		if ( c != ' ' )
			putchar (c);
		if ( c != ' ' )
			blank = 0;
		if ( c == ' ' )
			++blank;
		if ( blank == 1)
			putchar (c);
			
	}

}
		
