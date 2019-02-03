#include <stdio.h>

int main(void){
	int num1,num2,num3;

	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
        scanf("%d",&num2);
	printf("Enter third number: ");
        scanf("%d",&num3);
	
	if(num1>=num2&&num1>=num3){
		if(num2>=num3){
			printf("%d,%d,%d\n",num3,num2,num1);

		}
		else{
			printf("%d,%d,%d\n",num2,num3,num1);

		}
	}
	else if(num2>=num1&&num2>=num3){
		if(num1>=num3){
			printf("%d,%d,%d\n",num3,num1,num2);

		}
		else{
			printf("%d,%d,%d\n",num1,num3,num2);
		}
	}
	else{
		if(num1>=num2){
			printf("%d,%d,%d\n",num2,num1,num3);
		}
		else{
			printf("%d,%d,%d\n",num1,num2,num3);

		}	
	}
	return 0;
	
}
