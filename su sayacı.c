#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float aow,rate;
	 printf("Enter amount of water:",aow);
	 scanf("%f",&aow);
	 
	 if(aow<25)
	 {
	 	printf("Charge is:%f TL",145.000);
	 }
	 
	 else if(aow>25 || aow<100)
	 {
	 	printf("Charge is:%f TL",2.500000+(aow-25)*120.000);
	 }
	 
	 else(aow>100)
	 
	 {
	 	printf("Charge is:%f TL", 3.000000+(aow-100)*140.000);
	 }
	
	
	
	
	
	
	system("pause");
	return 0;
}
