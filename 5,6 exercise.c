#include<stdio.h>
#include<stdlib.h>
int main()
{
	float grossSale,salary;
	int i;
	for(i=200;i<10;i++);
	{
		printf("Enter gross sales:");
		scanf("%f",&grossSale);
		salary=200+grossSale*9.0/100.0;
		printf("Your salary is %0.2f\n",salary);
	}

	
	
	system("pause");
	return 0;
}
