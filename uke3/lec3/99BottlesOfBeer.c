#include<stdio.h>
int main(){
	for(int i = 99; i >= 0; i--){
		//First sentence
		if(i != 0){
			printf("%d Bottles of beer on the wall, %d bottles of beer.\n", i, i);
		} else {
			printf("No more bottles of beer on the wall, no more bottles of beer.\n");
		}

		//Second sentence
		if(i == 0){
			printf("Go to the store and buy some more, 99 bottles of beer on the wall");
		} else if(i == 1){
			printf("Take one down and pass it around, no more bottles of beer on the wall.");
		} else{
			printf("Take one down and pass it around, %d bottles of beer on the wall.", i-1);
		}

		//New verse
		printf("\n\n");

	}

	return 0;
}
