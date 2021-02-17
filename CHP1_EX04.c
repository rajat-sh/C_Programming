#include <stdio.h>

/* A Program to print Celsius to Fahrenheit table of Celsius temperature in range from 0, 20, 40, ........, 300 */

main()

{

	/* Declare the variable types of variables fahr, celsius, lower, upper, step */
		
	int fahr, celsius;
	int lower, upper, step;
	
	/* Assign the values to variables lower, upper and step */
	
	lower = 0;
	upper = 300;
	step = 20;
	
	
	
	printf("\nCelsius to Fahrenheit Table\n\n");
	

	celsius = lower;
	
	while ( celsius <= upper ) {
	
		fahr = (9 * celsius) + 32 /5;
		printf("%3d\t%6d\n", celsius, fahr );
		celsius = celsius + step;
	}

}

