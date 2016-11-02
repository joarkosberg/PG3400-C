#include <stdio.h>

typedef struct point{
	float x, y;
}point;

typedef struct triangle{
	point points[3];
}triangle;

int main(int argc, char *argv[]){
	triangle thisTri={
		0.0f,1.0f, 
		0.0f,0.0f, 
		1.0f,2.0f
	};
	printf("siste point = %f,%f\n", thisTri.points[2].x, thisTri.points[2].y);

	FILE* fil = fopen("triangle.txt", "wb");
	fwrite(&thisTri, sizeof(triangle), 1, fil);
	fclose(fil);

	return 0;
}