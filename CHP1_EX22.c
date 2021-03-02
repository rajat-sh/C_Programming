#include <stdio.h>
#define MAXLEN 10
#define IN 1
#define OUT 0

/* A program to print a histogram of the length of words in its input */

main()


{


	int c;
	int i;
	int j;
	int nc;
	int arr_of_len[MAXLEN];
	int state;

	i = j = nc = 0;
	state = IN;
	for(i =0; i < MAXLEN; ++i)
		arr_of_len[i] = 0;

	while(( c = getchar()) != EOF){
		++nc;
		if( c == ' ' || c == '\t' || c == '\n'){
			--nc;
			state = OUT;
		}
		if(state == OUT){
			if(nc != 0 && nc <= MAXLEN)
				++arr_of_len[nc];
			state = IN;
			nc = 0;
		}
	}

	
	for(i = 1; i <= MAXLEN; ++i){
		printf("|%3d  |", i);
		for( j = 0; j < arr_of_len[i]; ++j)
			printf("*");
		printf("\n");
	}


}






		

