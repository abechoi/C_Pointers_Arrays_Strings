/*
	STRINGS:
	1. Create an array of characters
	2. Prompt user for string
	3. Find the # of times the letter a comes up

	This ain't a race, it's a marathon.
*/

#include <stdio.h>


int main(){

	int i = 0;
	int length = 10;
	int match = 0;
	char astring[length];

	printf("Enter a word with 10 letters or less: \n");

	/* No need for %astring. Character arrays act like pointers. */
	scanf("%s", astring);

	while(i < length){

		if( astring[i] == 'a'){
			printf(" astring[i] = a!\n");
			++match; /* Always preincrement whenever possible */
		}
		++i;

	} /* END WHILE */
	printf("The number of matches = %d\n", match);


	return 0;
} /* END MAIN */