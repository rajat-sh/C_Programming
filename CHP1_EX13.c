#include <stdio.h>


/* A program to count the number of input characters; Second Version */



main()



{


	double nc;

	for ( nc = 0; getchar() != EOF ; ++ nc)
		;
	printf ( "%.0f\n", nc);



}



