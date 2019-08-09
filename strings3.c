/*
	STRINGS 3:
	1. strcmp compares 2 strings
	2. strlen returns the length of string
	3. strcat appends strings
	4. strcpy copies a string to another
	5. strncopy copies a string to another but takes length as well

*/

#include <stdio.h>
#include <string.h>


/* Function to replace newline with null terminator */
void strip_newline(char *str, int size){

	for( int i = 0; i < size; ++i){
		if( str[i] == '\n' ){
			str[i] = '\0';
			return;
		}
	}/* END FORLOOP */
}

int main(){

	int size = 50;
	int fullsize = 100;
	char firstname[size];
	char lastname[size];
	char fullname[fullsize];

	/* Get first name */
	printf("Enter your first name: ");
	fgets( firstname, size, stdin );

	/* Replace '\n' for '\0' */
	strip_newline( firstname, size );

	/* strcmp() compares firstname and Abe */
	if(strcmp( firstname, "Abe") == 0)
		printf("My name is also Abe!\n");
	else
		printf("Hi %s, my name is Abe!\n", firstname);

	printf("strcmp = %d\n", strcmp( firstname, "Abe"));

	/* Get last name */
	printf("The length of first name = %lu\n", strlen(firstname));
	printf("Enter your last name: ");
	fgets( lastname, size, stdin );

	/* Replace '\n' for '\0' */
	strip_newline( lastname, size);

	
	/* strcat appends to \0 */
	fullname[0] = '\0';

	/* Use strcat to create full name */
	strcat( fullname, firstname );
	strcat( fullname, " " );
	strcat( fullname, lastname );
	printf("Full name = %s\n", fullname);

	/* strncopy */
	strncpy(lastname, firstname, size);
	printf("last name changed to %s\n", lastname);

	return 0;
}/* END MAIN */















