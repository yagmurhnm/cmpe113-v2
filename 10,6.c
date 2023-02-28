#include<stdio.h>
#include<stdio.h>
int main(){
	
	int m,n,c,d;
	int matrix[10][10];
	int transpose[10][10];
	
	printf("enter rows and columns of matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter elements of the matrix\n");
	 for(c=0;c<m;c++)
	 for(d=0;d<n;d++)
	 scanf("%d",&matrix[c][d]);
	 
	 for(c=0;c<m;c++){
	 	for(d=0;d<n;d++)
	 transpose[d][c]=matrix[c][d];
	 }
	 
	 
	 printf("Transpose of the matrix:\n");
	 for(c=0;c<m;c++){
	  	for(d=0;d<n;d++)
	  	printf("%d\t",transpose[c][d]);
	  	printf("\n");
	 }
	 	return 0;
	
}
