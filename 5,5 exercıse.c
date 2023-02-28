//5,5.exercise---19,04,19//
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i,sign=1;
	float total=0,value=1;
	for(i=0;i<20;i++)
	{
	  
		total+=sign*1/value;
		value+=2; //value=value+2;
		sign=-1*sign;
	}
	
	printf("%f",total);
	
	
	
	
	
	system("PAUSE");
	return 0;
}
