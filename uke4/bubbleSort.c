#include <stdio.h>
#include <stdlib.h>

void swap(int *array, int a, int b);

int main (){
	//Welcome message
	printf("Welcome to bubble sort!\n");
	printf("Please provide your numbers:\n");

	//Init resources
	int capacity = 10;
	int size = 0;
	int *numbers = malloc(capacity*sizeof(int));

	//Get input
	int input;
	while(1){
		scanf("%d", &input);
		if(input == 0) break;
		numbers[size++] = input;
		if(size == capacity){
			capacity = capacity * 1.6;
			numbers = realloc(numbers, capacity*sizeof(int));
		}
	}

	//Sort!
	int done = 1;
	do{
		done = 1;
		for(int i = 1; i < size; i++){
			if(numbers[i-1] < numbers[i]){
				done = 0;
				swap(numbers, i, i-1);
			}
		}
	} while (!done);


	//Print
	printf("You sorted %d numbers:\n", size);
	for(int k = 0; k < size; k++){
		printf("%d - ", numbers[k]);
	}
	printf("\n");
}

void swap(int *array, int a, int b){
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
