/*
	STRUCTS:
	1. Create a struct named database
	2. The struct has 3 variables
	3. Use pointer to print the struct variables
	4. I used free( ptr ) but it threw a strange error

	Forward, always forward and forward I'll go.
*/

#include <stdio.h>
#include <stdlib.h>

struct database {

	int id_number;
	int age;
	float salary;
};

int main(){

	struct database employee;
	struct database *ptr;
	ptr = malloc(sizeof(*ptr));

	employee.age = 22;
	employee.id_number = 1;
	employee.salary = 12000.21;
	ptr = &employee;

	printf("age = %d\n", ptr->age);
	printf("id number = %d\n", ptr->id_number);
	printf("salary = %f\n", ptr->salary);


	return 0;
}