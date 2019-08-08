/*
	STRINGS 2:
	1. fgets function handles string inputs better than scanf
	2. fgets will add newline '\n' on a string if there is room
	3. We can replace the newline character with a null terminator.

*/

#include <stdio.h>

int main(){

	int size = 256;
	char string[size];

	printf("Enter a string: \n");
	fgets( string, size, stdin);

	/* FORLOOP1 - replace newline with null terminator */
	for( int i = 0; i < size; ++i){
		if( string[i] == '\n'){
			string[i] = '\0';
			break;
		}
	}/* END FORLOOP1 */

	printf("string = %s\n", string);

	return 0;
} /* END MAIN */