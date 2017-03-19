#include <stdio.h>
#include "../headers/structs.h"
#include "../headers/prototypes.h"

Input input_validation(){
	int ret=0, i;
	float value[3];
	char letter[] = {'A','B','C'};
	Input inputs;
	for(i=0;i<3;i++){
		while(ret>1 || ret == 0){
			printf("Enter a value for %c: \n", letter[i]);
			ret = scanf("%f", &value[i]);
			if(ret==0 || ret>1){
				printf("Invalid value: enter A again.\n");
			}
			scanf("%*c");
		}
		ret=0;
		printf("This is %c is %lf\n", letter[i], value[i]);	
	}
	inputs.a = value[0];
	inputs.b = value[1];
	inputs.c = value[2];
	return inputs;
}
