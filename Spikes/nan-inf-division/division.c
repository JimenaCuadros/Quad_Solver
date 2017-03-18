#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){

	double a = INFINITY, b = NAN;
	
	printf("Printing off INFINITY: %lf\n", a);
	printf("Printing off NAN: %lf\n", b);
	printf("INFINITY/INFINITY: %lf\n", a/a);
	printf("NAN/NAN: %lf\n", b/b);
	printf("INFINITY/NAN: %lf\n", a/b);
	printf("NAN/INFINITY: %lf\n", b/a);
	return 0;
}


