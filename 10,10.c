#include<stdio.h>
#include<stdlib.h>
#include<ctype.h> 

int main(){
	
	int k,i;
	char str[100];
	printf("Please enter a line:");
	gets(str);
	k=strlen(str);
	for(i=0;i<k;i++){
		if(str[i]>= 'A' && str[i]<= 'Z')//bilgisayar bunu ascıı tablosu olarak görüyor
		str[i]=(int)str[i]+32;
		
	}
	printf("line with lowercase letters:\n");
	printf("%s",str);
	
	system("PAUSE");
	return 0;
}
