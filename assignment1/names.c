#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **array, char *temp, int i);

int main (int argc, char *argv[]){
	//Welcome message
	printf("Welcome to word sort!\n");



	//Get file name
	int nameLength = 30;
	char *filename = malloc(nameLength*sizeof(char));
	if (argc < 2){
      printf("No filename given!\n");
      exit(EXIT_FAILURE);
  	}
   	strcpy(filename, argv[1]); //Check this method
	printf("File to read: %s\n", filename);



	//Get words from file
	char **names;
	int size = 0;
	int capacity = 64; 
	int maxChars = 32;  //This dosent work in any way
	names = malloc(capacity * sizeof(char*));
	for (int i = 0; i < capacity; i++)
	    names[i] = malloc(maxChars*sizeof(char));

	FILE *file;
	file = fopen(filename, "r");
	free(filename);
	if(file == 0){
		printf("Failed to open file!\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(names[size], maxChars*sizeof(char), file)){
        size = size + 1;
        if(size == capacity){
			int orgCapacity = capacity;
			capacity = capacity * 2;
			names = realloc(names, capacity*sizeof(char*));
			for (int i = orgCapacity; i < capacity; i++)
	    		names[i] = malloc(maxChars*sizeof(char));
		}
	}
	fclose(file);
	printf("Words in list = %d\n", size);



	//Sorting
	int done;
	char *temp = malloc(maxChars*sizeof(char)); 
	do{
		done = 1;
		for(int i = 0; i < size - 1; i++){
			if(strcasecmp(names[i], names[i+1]) > 0){
				done = 0;
				swap(names, temp, i);
			}
		}
	} while (!done);
	free(temp);



	//Print
	printf("You sorted %d names:\n", size);
	for(int k = 0; k < size; k++){
		printf("%d: \t%s", k+1, names[k]);
	}
	printf("\n");



	//Free upp memory
	for(int i = 0; i < capacity; i++)
		free(names[i]);
	free(names);
}



void swap(char **array, char *temp, int i){
	strcpy(temp, array[i + 1]);
	strcpy(array[i + 1], array[i]);
	strcpy(array[i], temp);
}
