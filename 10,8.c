#include<stdio.h>
#include<stdlib.h>
 
int main(){
	char arrayOfWords[3][10]={0};
	int i;
	printf("Enter a string:");
	for(i=0;i<3;i++){
		scanf("%s",arrayOfWords[i]);//matrixin elemanlar�n� bo�luk g�rene kadar bas�yor.
	}
	
	printf("Matrix: \n");
	for(i=0;i<3;i++){
		printf("%s\n",arrayOfWords[i]);
		
	}
 	
 	system("PAUSE");
 	return 0;
}

