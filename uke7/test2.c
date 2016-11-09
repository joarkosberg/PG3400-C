#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "employee.h"

int main(void){
	employee kjetil;
	int nameStr = 100;
	kjetil.name = malloc(nameStr);
	strncpy(kjetil.name, "Kjetil Raaen", nameStr);
	kjetil.salary=100000;


	printEmployee(&kjetil);
	addSalary(&kjetil, 1220000);

	printEmployee(&kjetil);

	free(kjetil.name);
	kjetil.name = NULL;
	return 0;
}