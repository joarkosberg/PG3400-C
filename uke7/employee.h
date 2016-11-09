typedef struct employee{
	char * name;
	int salary;
} employee;

void addSalary(employee *thisE, int x); //All funksjoner her må ha peker til strukten.
void printEmployee(employee *thisE);