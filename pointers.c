/*
	POINTERS:
	1. Prompt user to enter int for x
	2. Point memory address of x into p
	3. malloc function can allocate memory by size
	4. sizeof function returns size of variable
	5. free function returns memory back to OS 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int x, *p, *ptr;

	ptr = malloc( sizeof(*ptr) ); /* allocates size of int into *ptr */

	p = &x; /* They now share the same memory address */

	printf("Enter the value of x: \n");
	scanf("%d", &x);
	printf("*p = %d\n", *p);
	printf("*ptr = %d\n", *ptr);


	free( ptr ); /* free function returns memory back to OS */
	getchar();
}