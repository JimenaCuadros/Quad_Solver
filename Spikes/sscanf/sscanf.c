#include <stdio.h>

#define VALUE 16

int main(int argc, char* argv[]){
	char inputA[VALUE], inputB[VALUE], inputC[VALUE];
	float a,b,c;
	printf("Enter a value for a\n");
	fgets(inputA, sizeof(inputA), stdin);
	sscanf(inputA, "%f", &a);
	printf("Enter a value for b\n");
	fgets(inputB, sizeof(inputB), stdin);
	sscanf(inputB, "%f", &b);
	printf("Enter a value for c\n");
	fgets(inputC, sizeof(inputC), stdin);
	sscanf(inputC, "%f", &c);
	
	printf("a = %f, b = %f, c = %f\n", a,b,c);

	
	
	
}
