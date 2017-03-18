#include <stdio.h>

int roundNum(float a);

int main(int argc, char* argv[]){
    printf("%d\n", roundNum(-3.14159));
    return 0;
}

int roundNum(float a){ 
	if(a<0){ 
		a-=.5;
	} else{ 
		a+=0.5;
	}    	
	return a;
}
