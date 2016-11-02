#include <stdio.h>


int main(int argc, char *argv[]){
	int a = 3, b = 6;

	printf("Hi\n");

	FILE* fil = fopen("nyfil.txt", "w");
	fprintf(fil, "a=%d, b=%d\n", a, b);
	fclose(fil);

	int c, d;
	FILE* open = fopen("nyfil.txt", "r");
	fscanf(open, "%d , %d", &c, &d);
	printf("a=%d, b=%d\n", c, d);
	fclose(open);

	return 0;
}