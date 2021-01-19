#include <stdio.h>

/* A program to copy input to output, replacing each tab by \t, each backspace by \b, and each backlash by \\ */



main()


{


	int c;
	

	
	
	while ( ( c = getchar() ) != EOF )
	{	

		if ( c != '\t' )
			putchar (c);
		if ( c == '\t' )
			printf ("\\t");	
		if ( c == '\b' )
			printf ("\\b");
		if ( c == '\\')
			printf ( "\\");		
	}


}
		
