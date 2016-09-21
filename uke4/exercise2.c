#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Normal usage of scanf is the following:
int a,b;
printf("Type two integers seperated with space\n");
scanf("%d %d", &a, &b);
printf("The numbers are %d, %d \n", a,b);

Write a program where you use scanf to read integers from the terminal, but
without using '&' in the scanf call. It should look more like this :

scanf("%d %d", p, q);

Also print the larger of the two.
*/

int main(){
	printf("Type two integers from the terminal: ");

	int *i1 = malloc(sizeof(int));
	int *i2 = malloc(sizeof(int));
	scanf("%d %d", i1, i2);
	
	printf("The integers are: %d and %d\n", *i1, *i2);
	if(*i1 > *i2){
		printf("%d er størst\n", *i1);
	} else if(*i1 < *i2){
		printf("%d er størst\n", *i2);
	} else {
		printf("De er like!\n");
	}
}
