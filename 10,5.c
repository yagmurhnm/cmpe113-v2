#include<stdio.h>
#include<stdio.h>

int main(){
	int i,j,temp,N;
	printf("enter the size of the Matrix:");
	scanf("%d",&N);
	
	int matrix[N][N];
	printf("Enter the matrix of size %dx%d: \n",N,N);
	
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d",&matrix[i][j]);
			}}
			
	for(i=0;i<N;i++){
		j=i;
		temp=matrix[i][j];
		matrix[i][j]=matrix[i][N-j-1];
		matrix[i][N-j-1]=temp;
	}	
	
	printf("matrix after swapping diagonals: \n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d\t",matrix[i][j]);
	}
	printf("\n");
	}
	system("pause");
	return 0;


	
}
