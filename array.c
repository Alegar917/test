#include <stdio.h>
int a=0;
int size=0;
void Inital(int A[],int n){
        for(int i=0;i<n;i++){
                A[i]=0;
        }
}


void growA(int A[]){
	void Display(int []);	
        int n=a*2,tep[n];
	Inital(tep,n);
        for(int i=0;i<a;i++){
                tep[i]=A[i];
        }
        A=tep;
	a=a*2;
	size=a;
}


void Input(int A[]){
	int num,pos;
	printf("Enter a number: ");
	scanf("%d",&num);
        printf("Postion: ");
        scanf("%d",&pos);
        while(pos<0||pos>=a){
		printf("Enter a valid Postion: ");
	        scanf("%d",&pos);

        }
	if(A[pos]!=0){
        	for(int i=a;i>=pos;i--){
        	    	A[i+1]=A[i];
       	 	}
	}
	A[pos]=num;
	++size;
	printf("\n");
}
void Remove(int A[]){
	int pos;
	printf("Postion: ");
        scanf("%d",&pos);
	if(pos<0||pos>a){
		printf("not a valid postion \n\n");
		return;
	}	
	for(int i=pos;i<=a-1;i++){
		A[i]=A[i+1];
	}
	--size;
	printf("\n");	
}

void Display(int A[]){
        for(int i=0;i<a;i++){
                printf("element:%d is %d\n",i+1,A[i]);
        }
	printf("\n");
}

void bubblesort(int A[]){
        int i,j,temp;
        for( i=0;i<a-1;i++){
                for(j=0;j<a-1-i;j++){
                        if(A[j]<A[j+1]){
                                temp=A[j];
                                A[j]=A[j+1];
                                A[j+1]=temp;
                        }
                }
        }
	printf("sorted!");
	printf("\n\n");
}

void Lsearch(int A[],int data){
       	int i=0;
        while(i<=a){
                if(A[i]==data){
                        printf("location is in index %d\n\n",i);
                        return;
                }
		i++;
        }
	printf("It is not in the Array\n");
}

int main(){
	int n,data,i;
	char input='y';
	printf("Enter the array size(must be 0-100): ");
	scanf("%d",&n);
	while( getchar() != '\n' ) {}
	printf("\n");
	while(n<0||n>100){
		printf("Enter a valid array size: ");
       	 	scanf("%d",&n);
        	while( getchar() != '\n' ) {}
		
	}	
	int A[n];
	Inital(A,n);
	a=n;
	for(;;){
		printf("1.sort 2.search 3.insert 4.delete 5.display 6.exit\n");
		printf("Command: ");
		scanf("%d",&i);
		printf("\n");
		switch(i){
			case 1:
			bubblesort(A);
			break;
			case 2:
			printf("element to search:");
                	scanf("%d",&data);
			while( getchar() != '\n' ) {}
			Lsearch(A,data);
			break;
			case 3:
			while(input=='y'||input=='Y'){
			if(size==a){
                		growA(A);
       			 }
			Input(A);
			printf("Do you want to add more(y/n): ");
                        scanf(" %c",&input);
			while( getchar() != '\n' ) {}
			
			printf("\n");	
			}
			break;
			case 4:
			Remove(A);
			break;
			case 5:
			Display(A);
			break;
			case 6:
			return 0;
			default:
			printf("Enter a valid command (1-6)!\n ");
                	break;
        	}			
	}	
}
