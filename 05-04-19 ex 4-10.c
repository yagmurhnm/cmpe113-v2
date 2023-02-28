#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float num1,num2;
	char ch;
	printf("Choose an operator (+,-,*,/):");
	scanf("%c",ch);
	printf("Enter first number:");
	scanf("%f",&num1);
	printf("Enter second number:");
	scanf("%f",&num2);
	
	if(ch=='+')
	{
		printf("Result is:%f",num1+num2);
	
	}
	
	else if(ch=='-')
	{
		printf("Result is:%f",num1-num2);
	}
	
	else if(ch=='*')
	{
		printf("Result is:%f",num1*num2);
	}
	
	else (ch=='/');
	
	{
		if (num2==0)
		{
			printf("YOU CANNOT DIVIDE BY ZERO!!");
		
		}
		else 
		{
			printf("Result is:%f",num1/num2);
		}
	}
	system("PAUSE");
	return 0;
	
	
	
}
