#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[5][5]={32,56,85,95,20,24,19,74,63,15,38,47,58,69,13,87,16,24,53,76,92,54,46,75,37};
	int i,j;
	int b[5][5]={0};
	
	printf("initial array:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			b[i][j]=((a[i-1][j])+(a[i+1][j])+(a[i][j-1])+(a[i][j+1]))/4;
		}
		printf("\n");
	}
	
	printf("result matrix:\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
