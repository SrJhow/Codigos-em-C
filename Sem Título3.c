#include<stdio.h>


//data:22/09/2022
int main(){
	float notas[3][2],media;
	int x,y;
	for(x=0;x<3;x++){
		for(y=0;y<2;y++){
			printf("\nDigite a nota %d do aluno %d: ",y+1,x+1);
			scanf("%f",&notas[x][y]);
		}
	}
	for(x=0;x<3;x++){
		media=0;
		for(y=0;y<2;y++){
			media+=notas[x][y];
		}
		media=media/2;
		printf("\nAluno %d media: %.2f",x+1,media);
	}
	printf("\n\n");
	for(x=0;x<3;x++){
		for(y=0;y<2;y++){
			printf("[%.2f]",notas[x][y]);
		
		}
		printf("\n");
	}
	return 0;
}
