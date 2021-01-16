#include <stdio.h>

/* A program that verifies that expression getchar() != EOF is 0 or 1 */

main ()

{
	
	int c;
	

	c = getchar () != EOF;
	 	

	printf ( "%d\n", c );
        

}
