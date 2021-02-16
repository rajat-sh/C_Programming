#include <stdio.h>

/* A Program to print Celsius to Fahrenheit table of Celsius temperature in range from 0, 20, 40, ........, 300 
   with floating-point arithmetic */


main()


{	
	/* Declare the variables with their data types */
	float fahr, celsius;
	int lower, upper, step;

	/* Initialize the value of the variables */
	lower = 0;
	upper = 300;
	step = 20;

	printf("\nFahrenheit to Celsius table\n\n");
	
	fahr = lower;

	while ( fahr <= upper ) {
		celsius = 5.0/9.0 * ( fahr - 32.0 );
		printf("%3.0f\t%6.1f\n", fahr , celsius );
		fahr = fahr + step;
	}

}



	
