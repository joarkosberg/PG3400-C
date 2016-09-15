#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long GetTime(void);
void DoProcessing(int i);
int FibonacciRecursion(int index);

int main (int argc, char *argv[]){
	unsigned long timeStart, timeEnd;
	timeStart = GetTime();

	//Processing
	int number = atoi(argv[1]);
	DoProcessing(number);

	timeEnd = GetTime();
	printf("Elapsed time of operation: %lu ms\n", (timeEnd - timeStart)/1000);

	return 0;
}

unsigned long GetTime() {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return tv.tv_sec*(unsigned long)1000000+tv.tv_usec;
}

void DoProcessing(int i){
	printf("Find Fibonacci number: %d\n", i);
	//This does the magic, laying out the number into a tree structure.
	//Untill there is only 1 and 0 left at the leafs, then everything gets summarized. 
	int number = FibonacciRecursion(i);
	printf("Fibonacci number: %d = %d\n", i, number);

}

int FibonacciRecursion (int index){
	if(index < 2) {
		return index;
	}else{
		return FibonacciRecursion(index - 1) + FibonacciRecursion(index - 2);
	}
}
