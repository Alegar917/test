#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char **argv){
	if(argc<2){
		printf("Not enough parameters");
	}
	else{
		double rad=atof(argv[1]);

		double area=M_PI*(rad*rad);
		double circum=2*M_PI*rad;
		
		printf("Area=%.2f\n",area);
		printf("Circumference=%.2f\n",circum);
	}
	return 0;
}

