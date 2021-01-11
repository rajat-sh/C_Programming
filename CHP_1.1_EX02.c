#include <stdio.h>

/* A Program to print fahrenheit to celsius table of fahrenheit temperature in range from 0, 20, 40, ........, 300 */

main()

{

	/* Declare the variable types of variables fahr, celsius, lower, upper, step */
		
	int fahr, celsius;
	int lower, upper, step;
	
	/* Assign the values to variables lower, upper and step */
	
	lower = 0;
	upper = 300;
	step = 20;
	
	
	printf("\n");
	printf("Fahrenheit to Celsius Table\n");
	printf("\n");

	fahr = lower;
	
	while ( fahr <= upper ) 
	{
		celsius = 5 * ( fahr - 32 ) /9;
		printf("%3d\t%6d\n", fahr, celsius );
		fahr = fahr + step;
	}

}


