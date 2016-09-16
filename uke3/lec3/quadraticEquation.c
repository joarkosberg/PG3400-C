#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double * GetResult(int a, int b, int c);

int main(int argc, char *argv[]){

	printf("Quadratic Equation Solver 1.0\n");
	printf("Numbers: %s %s %s\n", argv[1], argv[2], argv[3]);

	int numberA = atoi(argv[1]);
    int numberB = atoi(argv[2]);
    int numberC = atoi(argv[3]);
    double * results = GetResult(numberA, numberB, numberC);

    
	printf("Solution 1 is x = %.2f\n", results[0]);
    if(results[0] == results[1]){
    	printf("Only one solution to this equation\n");
    } else {
    	printf("Solution 2 is x = %.2f\n", results[1]);
	}

	return 0;
}

double * GetResult(int a, int b, int c){
	static double results [2];

	//Different parts of the equation
	int upperPart1 = -b;
	int underPart = 2 * a;
	int upperPart2Temp = (pow(b, 2))-(4*a*c);
	if(upperPart2Temp < 0) {
		printf("Solutions using the imaginary number:\n");
		upperPart2Temp = -upperPart2Temp;
	}
	double upperPart2 = sqrt(upperPart2Temp);

	//Getting final results
	results[0] = (upperPart1 + upperPart2) / underPart;
	results[1] = (upperPart1 - upperPart2) / underPart;
	return results;
}
