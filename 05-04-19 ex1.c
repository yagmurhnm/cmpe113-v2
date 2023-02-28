#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
	printf("Input an integer:");
	scanf("%d",&n);
	
	if(n%2==0)
	
	{
		printf("n is an EVEN integer");
	}
	
	else
	{
		printf("n is an ODD integer");
	}
	
	return 0;
}
