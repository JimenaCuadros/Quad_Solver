#include "../headers/structs.h"
#include <math.h>

Roots calc_roots(double determinant, double a, double b, double c, Roots roots){
	roots.oneRoot = 0;
	if(determinant > 0){
		roots.x1 = (-b+sqrt(determinant))/(2*a);
		roots.x1 = (-b-sqrt(determinant))/(2*a);
	} else if(determinant == 0){
		roots.x1 = -b/(2*a);
		roots.oneRoot = 1;
	} else {
		roots.valid = 1;
	}
	return roots;
}

