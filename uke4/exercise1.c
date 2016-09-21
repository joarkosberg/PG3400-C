#include <stdio.h>

int main(){
	int *pInt;
	char *pChar;
	short *pShort;
	double *pDouble;

	//On a 64bit machine the size of the memory adress will always be 8byte(64bit)
	printf("The size of pointers are %lu, %lu, %lu, %lu respectively \n", 
		sizeof(pInt), sizeof(pChar), sizeof(pShort), sizeof(pDouble));

	//The values will be how much memory that are allocated for each variable type.
	printf("The size of variables are %lu, %lu, %lu, %lu respectively \n", 
		sizeof(*pInt), sizeof(*pChar), sizeof(*pShort), sizeof(*pDouble));
}
