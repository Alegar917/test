#include<stdio.h>
#include<stdlib.h>

int main(int argc,char **argv){
	if(argc<2){
		printf("Not enough parameters");
	}	
	else{
		double amount=atof(argv[1]);
		printf("Amount=%.2lf\n",amount);

		int tens=amount/10;
		amount=amount-(tens*10);
		int fives=amount/5;
		amount=amount-(fives*5);
		int ones=amount/1;
		amount=amount-ones;
		
		int fifty=amount/.50;
		amount=amount-(fifty*.50);
		int quart=amount/.25;
		amount=amount-(quart*.25);	
		int dime=(float)amount/.10f;
		amount=amount-(dime*.10);
		int penny=amount/.01;

		
		printf("$10=%d\n",tens);
		printf("$5=%d\n",fives);
		printf("$1=%d\n",ones);
		printf("50 cents=%d\n",fifty);
		printf("Quarters=%d\n",quart);
		printf("Dime=%d\n",dime);
		printf("Penny=%d\n",penny);
	}
	return 0;
}
