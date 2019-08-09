/*
	POINTERS 2:
	1. pTuna == &tuna if *pTuna = &tuna
	2. The symbols * and & cancel each other out
	3. Changing *pTuna's value will change tuna's value
	4. *(meatBalls+2) gives value of the third index of an array
*/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int tuna = 19;

	//  pTuna = memory address of tuna
	int *pTuna = &tuna;

	int meatBalls[5] = {5,10,15,20,25}; // dereferencing test

	printf("Address \t Name \t Value\n");
	printf("%p \t %s \t %d\n", &tuna, "tuna", tuna);
	printf("%p \t %s \t %p\n", &pTuna, "pTuna", pTuna);

	// This changes the value of tuna since the memory address
	// of &tuna and pTuna are the same
	*pTuna = 20;

	printf("\ntuna = %d\n", tuna);
	printf("&tuna = %p\n", &tuna);

	printf("\n*pTuna = %d\n", *pTuna );
	printf("pTuna = %p\n", pTuna );
	printf("&pTuna = %p\n", &pTuna );

	// Return third index of an array
	printf("\n*(meatBalls+2) = %d\n", *(meatBalls+2));
	

	return 0;
}
