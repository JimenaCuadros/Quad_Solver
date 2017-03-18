#include <math.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	double d[] = {0, 1, 10, .7, (1/6), .2222, 3.1415, 123456};
	float f[] = {0, 1, 10, .7, (1/6), .2222, 3.1415, 123456};
	int i=0;
	
	while(i<8){
		printf("Double sqrt(%.4f) = %f\n", d[i], sqrt(d[i]));
		i++;
	}
	printf("\n");
	i=0;
	while(i<8){
		printf("Float sqrtf(%.4f) = %f\n", f[i], sqrtf(f[i]));
		i++;
	}
	return 0;
}
