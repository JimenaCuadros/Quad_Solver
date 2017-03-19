#include <stdio.h>
#include <math.h>
#include "../headers/structs.h"
#include "../headers/prototypes.h"


int main(int argc, char** argv){
	Roots roots;
	Input inputs;
	float numerator;
	roots.valid=1;
	inputs = input_validation();
	if(inputs.a ==0){
		printf("A cannot be zero\n");
		return 0;
	}
	numerator = calc_numerator(inputs.a, inputs.b, inputs.c);
	printf("%lf NUMERATER\n", numerator);
	roots = calc_roots(numerator, inputs, roots);
	if(roots.valid == 1 && roots.oneroot == -1){
		printf("There is one root: %f\n", roots.x1);
	} else if(roots.valid == 1){
		printf("There are two roots: %f and %f\n", roots.x1, roots.x2);
	} else {
		printf("The roots are imaginary\n");
	}
	return 0;
}
