#include <stdio.h>


int main(){
	void eveodd(int);
	void arms(int);
	int rev(int);
	void palin(int);

	int i,n;
	printf("Commands: 1=Even&Odd, 2=ArmstrongNum, 3=Reverse, ");
	printf("4=Palindrome, 5=exit\n\n");
	for(;;){
		printf("Enter Command : ");
	        scanf("%d",&i);
		switch(i){
			case 1:
				printf("Enter a number: ");
				scanf("%d",&n);
				eveodd(n);
				break;
			case 2:
				printf("Enter a number: ");
                                scanf("%d",&n);
				arms(n);
				break;
			case 3:
				printf("Enter a number: ");
                                scanf("%d",&n);
				printf("Reversed number: %d\n\n",rev(n));
				break;
			case 4:
				printf("Enter a number: ");
                                scanf("%d",&n);
				palin(n);
				break;
			case 5:
				return 0;
			default:
				printf("Commands: 1=Even&Odd, 2=ArmstrongNum, 3=Reverse, ");
        			printf("4=Palindrome, 5=exit\n\n");
	 			break;
		}


	}

}

void eveodd(int n){
	int digit,even=0,odd=0,num_odd=0,num_even=0;
	while(n>0){
		digit=n%10;
		if(digit%2==1){
			odd+=digit;
			num_odd++;
		}
		else{
			even+=digit;
			num_even++;
		}
		n/=10;
	}
	printf("sum of even: %d\n",even);
	printf("sum of odd: %d\n",odd);
	printf("total number of even: %d\n",num_even);
	printf("total number of odd: %d\n\n",num_odd);
}


void arms(int n){
	int digit,num,sum=0;
	num=n;
	while(num>0){
		digit=num%10;
		
		sum+=digit*digit*digit;
		num/=10;
	}
	if(n==sum){
		printf("it is an Armstrong number\n");
	}
	else{
		printf("it is not an Armstrong number\n");

	}
	printf("\n");

}
int rev(int n){
	int digit,rev=0;
	while(n>0){
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	return rev;
}	

void palin(int n){
	int palin=rev(n);
	if(n==palin){
		printf("it is a palindrome\n");	
	}
	else{
		printf("it is not a palindrome\n");
	}
	printf("\n");
}
