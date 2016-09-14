#include <stdio.h>
int main() 
{
	int a = 5;
	int b = a++;
	int c = ++b;
	int d = b++;

	printf("A = 6, B = 7, C = 6, D = 6\n");
	printf("A = %d, B = %d, C = %d, D = %d\n\n", a, b, c, d);

	int x = 10;
	int y = 9;
	int z = 8;
	int w = 7;

	if((x==y++) && (z==++x)){
		w = 100;
		printf("This is obviously true");
	}
	z = ++w+y++;

	printf("X = 10, Y = 11 , Z = 18 , W = 8\n");
	printf("X = %d, Y = %d, Z = %d, W = %d\n\n", x, y, z, w);

	return 0;
}
