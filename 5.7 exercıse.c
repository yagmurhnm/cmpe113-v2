#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i;
	float total=0,val;
	for(i=0;i<5;i++)
	{
	 printf("enter a value:");
	 scanf("%f",&val);
	 total+=pow(val,2);	
	}
	printf("total of squares %0.0f\n",total);
	printf("average %0.2f",total/i);
	
	
	system("pause");
	return 0;
}
