#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct runner{
	char surname[30];
	char country[30];
	double minutes;
};

void winner(struct runner r[],int size){
	char winner_surname[30];
	char winner_country[30];
	double winner_min;
	int i;
	double max=100.0;
	for(i=0;i<3;i++){
		if(r[i].minutes<max){
			max=r[i].minutes;
			strcpy(winner_surname,r[i].surname);
			strcpy(winner_country,r[i].country);
			winner_min=r[i].minutes;
		}
	}
	printf("%s %s %.2lf\n",winner_surname,winner_country,winner_min);
	
}

int main(){
	struct runner run[3];
	int i;
	printf("Enter runner surname,country,minutes:");
	for(i=0;i<3;i++){
		scanf("%s",&run[i].surname);
		scanf("%s",&run[i].country);
		scanf("%lf",&run[i].minutes);
	}
	printf("The winner is: \n");
	winner(run,3);
	
	system("pause");
	return 0;
}
