#include <stdio.h>

/* A program to print fahr-celsius table of fahr temp in range from 300, 280, 260, ........, 0 */

main()


{


	int fahr;

	for ( fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf ("3%d\t%6.1f\n", fahr , (5.0 /9.0) * ( fahr -32 ) );


}
