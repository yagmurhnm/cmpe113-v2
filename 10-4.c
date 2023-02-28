#include<stdio.h>
#include<stdlib.h>
int main(){
	int arr[][5]={{1,2,3,2,1},{1,2,0,2,1},{1,0,0,0,1},{1,2,0,2,1},{1,2,3,2,1}};
	int i=0,j=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i][j]==0)
			printf("\t");
			else
			printf("%d\t",arr[i][j]);}
			printf("\n");
		}
		system("pause");
	}

