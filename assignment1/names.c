#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *array, int a, int b);

int main (int argc, char *argv[]){
	//Welcome message
	printf("Welcome to word sort!\n");



	//Get file name
	int length = 30;
	char *filename = malloc(length*sizeof(char));
	if (argc < 2){
      printf("No filename given!\n");
      exit(EXIT_FAILURE);
  	}
   	strcpy(filename, argv[1]); //Check this method
	printf("File to read: %s\n", filename);



	//Get words from file
	int maxWords = 1024;
	char strings[maxWords][20];
	int size = 0;
	FILE *file;
	file = fopen(filename, "r");
	if(file == 0){
		printf("Failed to open file!\n");
		exit(EXIT_FAILURE);
	}

	while (size < maxWords && fgets(strings[size], sizeof(strings[0]), file)){
		strings[size][strlen(strings[size])-1] = '\0';
        size = size + 1;
	}
	fclose(file);
	printf("Words in list = %d\n", size);
/*

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
*/



/*
Sorting:
Once the names are read into the memory, you should sort them alphabetically,
preferably without copying to a new location. You should already have learned
Bubble Sort. After sorting the program should print all the names.
*/


/*
	//Print
	printf("You sorted %d numbers:\n", size);
	for(int k = 0; k < size; k++){
		printf("%d - ", numbers[k]);
	}
	printf("\n");
*/
}

void swap(int *array, int a, int b){
	int temp = array[a];
	array[a] = array[b];
	array[b] = temp;
}
