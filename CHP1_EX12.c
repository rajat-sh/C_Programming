#include <stdio.h>

/* A program to count the number of characters in input; First version */


main()



{



	long nc;
	nc = 0;
	
	while ( getchar() != EOF )
		++nc;
	
	printf("%ld\n", nc );



}
