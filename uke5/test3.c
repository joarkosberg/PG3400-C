#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee{
	int id;
	char name[30];
	int salary;
} Employee;

int main()
{
	Employee kjetil;
	kjetil.id = 42;
	strcpy(kjetil.name, "Kjetil Raaen");
	kjetil.salary = 1000;

	printf("Employeeid: %d, name: %s, salary: %d\n", kjetil.id, kjetil.name, kjetil.salary);
	printf("Size of strut %u\n", sizeof(Employee));
}