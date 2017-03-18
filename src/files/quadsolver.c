#include <stdio.h>
#include <math.h>
#include "../headers/structs.h"
#include "../headers/prototypes.h"


int main(int argc, char** argv){
	Roots roots;
	Input inputs;
	double determinant;
	roots.valid=1;
	inputs = input_validation();
	if(inputs.a ==0)
		printf("A cannot be zero\n");
		return 0;
	determinant = calc_determinant(inputs.a, inputs.b, inputs.c);
	roots = calc_roots(determinate, inputs.a, inputs.b, inputs.c, roots);
	if(roots.valid == 1 && roots.oneRoot == -1){
		printf("There is one root: %lf\n", roots.x1);
	} else if(roots.valid == 1){
		printf("There are two roots: %lf and %lf\n", roots.x1, roots.x2);
	} else {
		printf("The roots are imaginary\n");
	}
	return 0;
}
