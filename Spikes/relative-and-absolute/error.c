#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void absoluteError(float calc, float actual);
void relativeError(float calc, float actual);
int main(int argc, char* argv[]){
	float calc, actual;
	printf("Enter the calculated value: ");
	scanf("%f", &calc);
	printf("\n");
	printf("Enter the actual value: ");
	scanf("%f", &actual);
	printf("\n");
	absoluteError(calc, actual);
	relativeError(calc, actual);
	return 0;		
}
void absoluteError(float calc, float actual){
	printf("Absolute error is: %f\n", fabsf(actual-calc));
}
void relativeError(float calc, float actual){
	printf("Relative error is: %f\n", fabsf(actual-calc)/actual);
}
