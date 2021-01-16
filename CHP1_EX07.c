#include <stdio.h>

#define LOWER 0   /* Lower limit of Fahr range */
#define UPPER 300 /* Upper limit of Fahr range */
#define  STEP 20  /* Step Size */

/* A Program to print the fahr-celsius table of fahr temp in range from 0, 20, 40, ........, 300 */


main()



{



	int fahr;


	printf ( "\n\nFahr-Celsius table of Fahr Temp in range from 0, 20, 40, ........, 300\n\n" );


	for ( fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP )
		printf ( "%3d\t%6.1f\n", fahr , ( 5.0 / 9.0 ) * ( fahr - 32 ) );


} 	
