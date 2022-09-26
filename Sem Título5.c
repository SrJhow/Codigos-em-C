#include<stdio.h>
#include<string.h>


//data: 22/09/2022
int main(){
	char nomes[3][20];
	float notas[3][2],media;
	int x,y;
	for(x=0;x<3;x++){
		printf("\nDigite o nome do aluno: ");
		fflush(stdin);
		gets(nomes[x]);
		for(y=0;y<2;y++){
			printf("\nDigite a nota do aluno %s: ",nomes[x]);
			scanf("%f",&notas[x][y]);
		}
	}
	for(x=0;x<3;x++){
		media=0;
		for(y=0;y<2;y++){
			media+=notas[x][y];
		}
		media=media/2;
		printf("\nAluno %s media: %.2f",nomes[x],media);
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
