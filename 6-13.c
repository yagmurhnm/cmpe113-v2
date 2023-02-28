#include<stdio.h>
#include<stdlib.h>
int main()
{
	int min,hr,sec;
	do
	{
		printf("Enter the time in seconds:");
	    scanf("%d",&sec);
	    if(sec<0)
	    {
	    	break;
		}
	    min=sec/60;
	    sec=sec%60;
	    hr=min/60;
	    min=min%60;
	    printf("It is:%d hr %d min %d sec\n",hr,min,sec);
	    
	}while(sec>=0);
	
	printf("bye!");
	return 0;
}
