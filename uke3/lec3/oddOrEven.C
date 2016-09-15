#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	printf("Odd or Even?\n");

	int number = atoi(argv[1]);

	if(number == 0){
		printf("Please provide a non-zero integer as argument!\n");
	} else {
		if(number % 2 == 0){
			printf("Number %d is read and it is even", number);
		} else {
			printf("Number %d is read and it is odd", number);
		}
		printf("\n");
	}
	return 0;
}
