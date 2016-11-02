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
      printf("No filename provided!\n");
      exit(EXIT_FAILURE);
  	}
   	strcpy(filename, argv[1]);
	printf("File to read: %s\n", filename);

	//Get words from file
	//Open file
	FILE *file;
	file = fopen(filename, "r");
	free(filename);
	if(file == 0){
		printf("Failed to open file!\n");
		exit(EXIT_FAILURE);
	}

	//Init resources
	char **names;
	int size = 0;
	int capacity = 2; //Since one of the files is missing newline at the end.
	int maxChars = 1;
	int tmpCount = 0;
	char n;
	while((n = fgetc(file)) != EOF) {
        if(n == '\n'){
        	if(tmpCount > maxChars)
                maxChars = tmpCount;
        	capacity++;
        	tmpCount = 0;
    	} else {
    		tmpCount++;
    	}
    }
    maxChars = maxChars + 2;
    printf("Longest string: %d\n", maxChars);

    //Allocate memory
	names = malloc(capacity * sizeof(char*));
	for (int i = 0; i < capacity; i++)
	    names[i] = malloc(maxChars*sizeof(char));

	//Get words
	fseek(file, 0, SEEK_SET);
	while (fgets(names[size], maxChars*sizeof(char), file)){
        size = size + 1;
	}
	fclose(file);
	printf("Words in list: %d\n", size);

	//Sort words
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

	//Print sorted words
	printf("Words sorted:\n");
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
