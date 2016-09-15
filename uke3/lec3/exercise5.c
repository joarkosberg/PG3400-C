#include <stdio.h>
#include <stdlib.h>
int main(){
{
	int a = 9;

	if(a%2 == 0 && a != 2){
		printf("%d is divisible by 2", a);}
	else if(a%3 == 0 && a != 3){
		printf("%d is divisible by 3", a);}
	else if(a%5 == 0 && a != 5){
		printf("%d is divisible by 5", a);}
	else if(a%7 == 0 && a != 7){
		printf("%d is divisible by 7", a);}
	else if(a%11 == 0 && a != 11){
		printf("%d is divisible by 11", a);}
	else if(a%13 == 0 && a != 13){
		printf("%d is divisible by 13", a);}
	else if(a%17 == 0 && a != 17){
		printf("%d is divisible by 17", a);}
	else if(a%19 == 0 && a != 19){
		printf("%d is divisible by 19", a);}
	else{
		printf("%d is a prime or 1", a);
	}

	printf("\n");
}

// I want prime numbers, But this one only gives 1 to me. What should I change
// to get to the last printf when a is a prime number?	

{
	int a = 10;
	int sum = 0;
	while(a>0){
		sum = sum + a--;
	}
	printf("sum is %d", sum);
	printf("\n");
}

//Try changing the order of decrement and increment appropriately.

}
