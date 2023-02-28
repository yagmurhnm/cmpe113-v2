#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c_size,i;
	float mt1,mt2,final,w_total;
	printf("Enter c_size:");
	scanf("%d",&c_size);
	for(i=0;i<c_size;i++)
	{
		printf("Enter the grades of exams:");
		scanf("%f%f%f",&mt1,&mt2,&final);
		w_total= 0.25 * (mt1+mt2) + 0.50 * final;
		if(w_total<60)
		{
			printf("Your average grade is: %f! YOU FAILED THIS CITY!",w_total);
		}
		else
		{
			printf("Your average grade is: %f . YOU PASSED!",w_total);
		}
		
	}
	
	
	
	
	system("pause");
	return 0;
}
