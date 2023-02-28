#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    char type;
    int min;
    float hour;
    printf("Enter the type of the vehicle:");
	scanf("%c",&type);
		printf("Enter the number of minutes for parking:");
		scanf("%d",&min);
		hour=min/60.0;
	if( type=='C'|| type =='c')
	{
	
				
		if( hour<2)
		{
			printf("Total charge is:%f",hour*2.50);
		
			
		}
		
		else if (hour>=2 && hour <4)
		{
			printf("Total charge is:%f",4.5+(hour-2)*2.25);
		}
		
		else if( hour>4)
		{
			printf("Total charge is:%f",8.0+(hour)*2.00);
		}
	}
	
	else ( type=='T'|| type=='t' );
	
	{
		if( hour<5)
		{
			printf("Total charge is:%f",hour*5.50);
		}
		
		else ( hour>=5);
		{
			printf("Total charge is:%f",25.00+(hour*4.5));
		}
	}
		
	system("pause");
	return 0;
}
