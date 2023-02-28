#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float num1,num2;
	char ch;
	printf("enter first number:");
	scanf("%f",&num1);
	printf("enter second number:");
	scanf("%f",&num2);
	printf("choose operator (*,-,+,/):");
	scanf(" %c",&ch);
	
	if(ch=='+')
	{
		printf("result is: %f",num1+num2);
	}
	else if (ch=='-')
	{
		printf("result is:%f",num1-num2);
		
	}
	else if(ch=='*')
	{
		printf("the result is:%f",num1*num2);
		
		
	}
	else if(ch=='/')
	{
		
		
		if(num2==0)
		{
			printf("you can not divide a number with 0");
		}
		else
		{
		printf("the result is:%f",num1/num2);
		
		}
		
		
	}
	else{
		printf("INVALID OPERATOR!!!");
	}
	
	return 0;
	
}
