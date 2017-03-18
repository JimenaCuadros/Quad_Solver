#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
	double d[] = {INFINITY, NAN, -INFINITY, -NAN};
	int i=0;
	while(i<4){
		printf("sqrt(%f) = %f\n", d[i], sqrt(d[i]));
		i++;
	}
	i=0;
	return 0;
}
