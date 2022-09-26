#include <stdio.h>


//data: 19/09/2022
//algoritmo: ENTRADA-PROCESSAMENTO-SAÍDA
main(){
	char sexo,nome[20];
	int idade;
	do{	
		system("cls");
		printf("\nDigite o nome: ");
		fflush(stdin);
		gets(nome);
		printf("\nDigite o sexo: ");
		scanf("%c",&sexo);
		printf("\nDigite a idade: ");
		scanf("%d",&idade);
		
		if(sexo=='M'||sexo=='m'){
			if(idade>=18){
				printf("\nNome: %s",nome);
				printf("\nAlistamento necessario\n");
			}else{
				printf("\nNome: %s",nome);
				printf("\nAlistamento nao necessario\n");
			}
			
		}else{
			printf("\nNome: %s",nome);
			printf("\nAlistamento nao exigido\n");
			
		}
		system("pause");
	}while(idade!=0);
	
	return 0;
	
	} 
