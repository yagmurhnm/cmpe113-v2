#include<stdlib.h>
#include<stdio.h>
int main()
{
	int input,n;
	do{
		printf("Enter a value:");
		scanf("%d",&n);
		int i=1,factorial=1;
		do{
			factorial*=i;
			i++;
			
		}while(n>=i);
		printf("%d!=%d",n,factorial);
		printf("Enter 1 if you want to continue:");
		scanf("%d",&input);
	}while(input==1);
  	return 0;
}

