#include <stdio.h>

typedef struct point{
	float x, y;
}point;

typedef struct triangle{
	point points[3];
}triangle;

int main(int argc, char *argv[]){
	triangle thisTri;
	FILE* fil = fopen("triangle.txt", "rb");
	fread(&thisTri, sizeof(triangle), 1, fil);
	printf("siste point = %f,%f\n", thisTri.points[2].x, thisTri.points[2].y);
	fclose(fil);
	return 0;
}