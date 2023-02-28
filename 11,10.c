#include<stdio.h>
#include<string.h>
#include<math.h>
struct student{
	char name[50];
	double mt1,mt2,mt3,final,aver;
	};

int main(){
	struct student lab[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter name, 3 midterm grades and final: ");
		scanf("%s",lab[i].name);
		scanf("%lf %lf %lf %lf",lab[i].mt1,lab[i].mt2,lab[i].mt3,lab[i].final);
		
		if(lab[i].mt1>lab[i].mt2 && lab[i].mt3>lab[i].mt2){
			lab[i].aver=(lab[i].mt1*0.3)+(lab[i].mt3*0.3)+(lab[i].final*0.4);
			}
		else if(lab[i].mt2>lab[i].mt1 && lab[i].mt3>lab[i].mt1){
			lab[i].aver=(lab[i].mt2*0.3)+(lab[i].mt3*0.3)+(lab[i].final*0.4);
		}
    	else if(lab[i].mt1>lab[i].mt2 && lab[i].mt3>lab[i].mt2){
			lab[i].aver=(lab[i].mt1*0.3)+(lab[i].mt3*0.3)+(lab[i].final*0.4);
		}
		else{
			printf("ERROR!");
		}
	}
	system("PAUSE");
	return 0;
}
