#include<stdio.h>
#include<stdlib.h>
 
int main(){
	int i,k;
	char s[100];
	printf("Enter a string:");
	gets(s);
	k=strlen(s);//k<--stringin uzunluğu
	for(i=0;i<k;i++)
	{
		if(s[i]==' ')
		{
			s[i]='*';
		}
		
	}
	
	printf("New string: %s\n",s);
	
	system("PAUSE");
	return 0;
}
