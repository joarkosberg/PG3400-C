#include <stdio.h>

int main(int argc, char *argv[]){
	int a, b;

	printf("Hi\n");
	int retrun = scanf("%d, %d", &a, &b); 
	/* Trenger ikke være , komma i mellom kan være og eller annet. 
	Tegnet er kun det scanf leter etter
	*/
	printf("It supports ...a = %d, b = %d\n", a, b );
	printf("Scanf = %d\n", retrun);

	return 0;
}