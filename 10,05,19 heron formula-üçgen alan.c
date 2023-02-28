#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double area(int a,int b,int c)
{
	double 	s=(a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
	int val1,val2,val3;
	printf("Enter the sides of a triangle:");
	scanf("%d%d%d",&val1,&val2,&val3);
	printf("Area of this triangle=%1f",area(val1,val2,val3));
	return 0;
}

