#include <stdio.h>
#include <inttypes.h>
int main()
{
	int i = 12;
	uint16_t ui = 12;
	int16_t si = 12;

	float f = 23.43;
	double d = 23.126;

	long l = 12351;
	long long ll = 23;

	int ia[10];

	printf("Integer = %lu byte\n", sizeof(i));
	printf("Integer 16bit unsigned = %lu byte\n", sizeof(ui));
	printf("Integer 16bit signed = %lu byte\n", sizeof(si));

	printf("Long = %lu byte\n", sizeof(l));
	printf("Long long = %lu byte\n", sizeof(ll));

	printf("Float = %lu byte\n", sizeof(f));
	printf("Double = %lu byte\n", sizeof(d));

	printf("Array = %lu byte\n", sizeof(ia));

	printf("Test finished\n");
	return 0;
}
