#include "calc_roots.h"
float calc_numerator(Input *inputs){
	float numerator = 0.0;
	numerator = (inputs->b*inputs->b)-(4*(inputs->a*inputs->c));	
	return numerator;
}
