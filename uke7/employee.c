#include "employee.h"
#include <stdio.h>

void addSalary(employee *thisE, int x){
	thisE->salary += x;
}

void printEmployee(employee *thisE){
	printf("Employee.\nName: %s\nSalary: %d\n", thisE->name, thisE->salary);
}