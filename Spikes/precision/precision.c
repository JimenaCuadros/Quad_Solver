#include <stdio.h>
#include <math.h>

#define VALUE 66.65
#define VALUE2 99.95

int main(int argc, char* argv[]){

	float a = VALUE;
	double b = VALUE;


	printf("66.65 as a float = %f\n", a);
	printf("66.65 as a double = %lf\n", b);
	printf("\n");
	a=VALUE2;
	b=VALUE2;
	
	printf("99.95 as a float = %f\n", a);
	printf("99.95 as a double = %lf\n", b);
	printf("\n");
	return 0;

}
