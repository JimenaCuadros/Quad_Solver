#include "../headers/structs.h"
#include <math.h>
#include <stdio.h>

Roots calc_roots(float numerator, Input inputs, Roots roots){
	roots.oneroot = 0;
	if(numerator > 0.0){
		roots.x1 = (-inputs.b + (sqrtf(numerator)))/(2*inputs.a);
		roots.x2 = (-inputs.b - (sqrtf(numerator)))/(2*inputs.a);
	} else if(numerator == 0){
		roots.x1 = -inputs.b/(2*inputs.a);
		roots.oneroot = 1;
	} else {
		roots.valid = 0;
	}
	return roots;
}

