#include "all.h"

void testINF(void){
	printf("Testing isinf(0.0) = %d\n", isinf(0.0));
	printf("Testing isinf(0.0/0.0) = %d\n", isinf(0.0/0.0));
	printf("Testing isinf(0.0/3.1415) = %d\n", isinf(0.0/3.1415));
	printf("Testing isinf(INFINITY) = %d\n", isinf(INFINITY));
	printf("Testing isinf(INFINITY/INFINITY) = %d\n", isinf(INFINITY/INFINITY));
	printf("Testing isinf() = %d\n", isinf(NAN));
	printf("End of isinf() testing\n");
	printf("\n");
}
