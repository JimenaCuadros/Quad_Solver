#include "all.h"


void testNAN(void){
	printf("Testing isnan(0.0) = %d\n", isnan(0.0));
	printf("Testing isnan(0.0/0.0) = %d\n", isnan(0.0/0.0));
	printf("Testing isnan(0.0/3.1415) = %d\n", isnan(0.0/3.1415));
	printf("Testing isnan(INFINITY) = %d\n", isnan(INFINITY));
	printf("Testing isnan(INFINITY/INFINITY) = %d\n", isnan(INFINITY/INFINITY));
	printf("Testing isnan(NAN) = %d\n", isnan(NAN));
	printf("End of isnan testing\n");
	printf("\n");
	
}
