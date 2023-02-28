#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int num;
	char check;
	
	
	printf("Please enter side of a square");
	scanf("%d",&num);
	
	printf("Please enter a or p");
	scanf(" %c",&check);
	
	 if (check=='p')
	 {
	 printf("The perimeter is:");
	 printf("%d",num*4);
	 }
	 else if(check=='a')
	 {
	 	printf("The area is:");
	 	printf("%d",num*num);
	 }
	 
	 else
	 {
	 	printf("ERROR");

	 }
	 system("PAUSE");
	 return 0;
}
