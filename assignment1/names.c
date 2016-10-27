#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *array, int a, int b);

int main (){
	//Welcome message
	printf("Welcome to word sort!\n");


/*
Gather:
With this assignment you will find some files with individual names on lines.
Write a program that takes a filename as input and reads the names from the file
until the end of file. This program should store the names in an array and also
the count in a variable. To store variable length names, you can either use an
array of pointers or a 2D array with a reasonable maximum length for each
name.

Example command line:
./myprogram human_male.txt
Execution of this must read all the integers in human_male.txt
*/

	//Get user input
	int length = 30;
	char *file = malloc(length*sizeof(char));

	scanf("%s", file);
	printf("File to read: %s\n", file);

	//Get words from file


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
