#include<stdlib.h>
#include<stdio.h>
int main()
{
    int posValues=0,negValues=0,value;
    for(;;) //infinitive loop//for(;;)//
	{
		printf("Enter a value:");
		scanf("%d",&value);
		if(value==12345)
		{
			break;
		}
		else if(value==0)
		{
			continue;
		}
		else if(value<0)
		{
			negValues++;
		}
		else
		{
			posValues++;
		}
	}
    printf("Total number of negative values=%d\n",negValues);
    printf("Total number of positive values=%d\n",posValues);
  	return 0;
}

