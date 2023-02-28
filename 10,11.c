
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i=0;
	int j=0;
	char s1[5],s2[5];
	printf("Enter a name:");
	gets(s1);
	printf("Enter a name:");
	gets(s2);
	printf("Common characters:\n");
	
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
		if(s1[i]==s2[j])
		printf("%c",s1[i]);	
		}
    	printf("\n");
	}
	
	
	
	system("PAUSE");
	return 0;
}
