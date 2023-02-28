#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1,num2,num3;
	printf("enter three numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1<0)
	{
		printf("%d",num1*num2*num3);
	}
	else
	{
		printf("%d",num1+num2+num3);}
	return 0;
}
