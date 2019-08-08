/*
	2D ARRAYS:
	1. Indices is the plural form in index
	2. Fill 2D array
	3. Print 2D array

	Back then, I did it for a degree...
	Now, I'm doing it for me.
*/

#include <stdio.h>


int main(){

	int x, y;
	int array[8][8];

	/* FORLOOP1 - Fills 2D array with the product of x and y */
	for( x = 0; x < 8; ++x ){
		for( y = 0; y < 8; ++y ){
			array[x][y] = x * y;
		}
	}/* END FORLOOP1 */

	printf("\nArray Indices: \n\n");

	/* FORLOOP2 - Prints the products */
	for( x = 0; x < 8; ++x ){
		for ( y = 0; y < 8 ; ++y)
		{
			printf("[%d][%d] = %d\n", x, y, array[x][y]);
		}
		printf("\n");
	}/* END FORLOOP2 */

	return 0;
}/* END MAIN */