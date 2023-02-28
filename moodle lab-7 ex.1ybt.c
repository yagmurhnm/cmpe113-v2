#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str1[30],str2[30];
	int strcmp(str1,str2);
	printf("Enter a string:");
	gets(str1);
	printf("Enter a string:");
	gets(str2);
	printf("String in order:");
	if(strcmp(str1,str2)<0){
		//str1>str2=1;
		//str1<str2=0;
		//str1=str2=0; döndürür
		strcat(str1,"");
		strcat(str1,str2);
		printf("%s",str1);
		
	}
	else{
		strcat(str2,"");
		strcat(str2,str1);
		printf("%s\n",str2);
	}
	
	
	
	
	
	system("PAUSE");
	return 0;
}
