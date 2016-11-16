#include <stdio.h>
#include <stdlib.h>

void a(int tall){
	printf("a = %d\n", tall);
}

void b(int tall){
	printf("b = %d\n", -tall);
}

int main (){
	void(*testfunc)(int tall) = NULL;

	testfunc = &a;
	testfunc(3);

	testfunc = b; 
	//& not needed. Henter automatisk, fordi den ikke kan hentes på noen annen måte.
	//Fortsatt lurt å bruke & for oversikt.
	testfunc(4);

	return 0;
}