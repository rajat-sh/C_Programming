#include <stdio.h>

/* A program to copy input to output, replacing each tab by \t, each backspace by \b, and each backlash by \\ */



main()



{


	int c;
	
	while(( c = getchar()) != EOF ){
		if ( c == '\t' ){
			putchar('\\');
			putchar('t');
		}
		if ( c == '\b'){
			putchar('\\');
			putchar('b');
		}
		if ( c == '\\' ){
			putchar('\\');
			putchar('\\');
		}
		if ( c != '\t' && c != '\b' && c != '\\' )
			putchar(c);
	}


}
	

