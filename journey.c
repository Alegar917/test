#include <stdio.h>
int main(){
        float miles,cost;
        int journey,i;
        printf("Enter the number of miles: ");
        scanf("%f",&miles);
        printf("Enter the class of journey: ");
        scanf("%d",&journey);

        switch(journey){
                case 1:	
                        while(i<100&&!(miles<=0)){
				i++;
                                cost+=3;
				miles-=1;
				if(miles<0){
					cost+=miles*3;
					miles=0;
				}
                  	}
			if(miles<1){
				cost+=miles*2.50;
				miles=0;
			}
                        while(i<250&&!(miles<=0)){
				i++;
                                cost+=2.50;
                                miles-=1;
				if(miles<0){
					cost+=miles*2.50;
					miles=0;
				}
                        }
			if(miles>0){
                        	cost+=miles*2;
			}
                        break;
	
		case 2:
			while(i<100&&!(miles<=0)){
				i++;
                                cost+=2;
                                miles-=1;
                                if(miles<0){
                                        cost+=miles*2;
                                        miles=0;
                                }
                        }
                        if(miles<1){
                                cost+=miles*1.50;
                                miles=0;
                        }
                        while(i<250&&!(miles<=0)){
                                i++;
                                cost+=1.50;
                                miles-=1;
                                if(miles<0){
                                        cost+=miles*1.50;
                                        miles=0;
                                }
                        }
                        if(miles>0){
                                cost+=miles*1;
			}
			break;
		case 3:
			while(i<100&&!(miles<=0)){
                                i++;
                                cost+=1.50;
                                miles-=1;
                                if(miles<0){
                                        cost+=miles*1.50;
                                        miles=0;
                                }
                        }
                        if(miles<1){
                                cost+=miles*1;
                                miles=0;
                        }
                        while(i<250&&!(miles<=0)){
                                i++;
                                cost+=1;
                                miles-=1;
                                if(miles<0){
                                        cost+=miles*1;
                                        miles=0;
                                }
                        }
                        if(miles>0){
                                cost+=miles*.50;

        		}
			break;
	}
	printf("%.2f\n",cost);
	return 0;
}
