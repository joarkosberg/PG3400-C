#include <stdio.h>
#include <stdlib.h>
#define MEMSIZE 10
int main(int argc, char *argv[]){ 
//	My first buggy program
	printf("Entering main\n");
	int *array;
	int alpha, beta; 
	array = (int*)malloc(MEMSIZE*sizeof(int));
	array[5] = array[3]+10;
	alpha = MEMSIZE + 20;
	beta = alpha + MEMSIZE + 30;
	free(array);
 }
