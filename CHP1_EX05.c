#include <stdio.h>

/* A program to print fahr-celsius table using for loop */

main()


{


	int fahr;
	
	for ( fahr = 0; fahr <= 300; fahr = fahr + 20 )
		printf("%3d\t%1.2f\n", fahr, (5.0/9.0) * ( fahr -32 ) );

}
