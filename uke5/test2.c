#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*
	Kan ikke skrives til: 
	char * tekst = "Hei alle sammen!";
	Ikke lov, noen systemer tillater. Men farlig!
*/
	char tekst[] = "Hei alle sammen!";
	tekst[7] = 'g';  

	for(int i = 0; i < 16; i++)
		printf("Bokstav: %c\n", tekst[i]);
}