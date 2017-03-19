#include "calc_roots.h"
#include "calc_numerator.h"
#include "qsolve_sqrt.h"
#include <math.h>
#include <stdio.h>

int calc_roots(Input *inputs, Roots *roots){
	float a,b,c,d,sqrtd;

a = inputs->a;
b = inputs->b;
c = inputs->c;

if(a == 0.0) { // not a true quadratic
  return -1 ;
} 

d = calc_numerator(inputs);
if(d < 0.0) { // No real roots 
  return -2;
}
if(d == 0) { // double root 
  roots->x1 = -b / (2.0*a);
  roots->x2 = roots->x1; 
  return 1;
}
// two roots 
sqrtd = qsolve_sqrt(d);
roots->x1 = (-b + sqrtd)/(2.0*a);
roots->x2 = (-b - sqrtd)/(2.0*a);

#ifdef DEBUG
fprintf(stderr,"DEBUG Exiting qsolve_roots return 2\n");
#endif

return 2;
}
