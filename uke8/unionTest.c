#include <stdio.h>
#include <stdlib.h>

typedef union testU{
	int i;
	double f;
	char c;
} testU;

int main (){

	printf("sizeof(testU)=%lo\n", sizeof(testU));
	
	testU un;

	un.c = 'C';
	un.i = 5;
	un.f = 3.14;
	printf("un.i=%d\nun.f=%f\nun.c=%c\n", un.i, un.f, un.c);
	printf("sizeof(testU)=%lo\n", sizeof(un.i));
	
	

	return 0;
}