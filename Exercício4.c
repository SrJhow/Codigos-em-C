#include <stdio.h>


//data: 19/09/2022
//algoritmo: ENTRADA-PROCESSAMENTO-SAÍDA
main(){
	char sexo,nome[20];
	int idade;
	
	printf("Digite o nome: ");
	gets(nome);
	printf("\nDigite o sexo: ");
	scanf("%c",&sexo);
	printf("\nDigite a idade: ");
	scanf("%d",&idade);
	
	if(sexo=='M'||sexo=='m'){
		if(idade>=18){
			printf("\nnome: %s",nome);
			printf("Alistamento necessario\n");
		}else{
			printf("\nnome: %s",nome);
			printf("\nAlistamento nao necessario");
		}
		
	}else{
		printf("\nnome: %s",nome);
		printf("\nAlistamento nao exigido");
		
	}
	
	
	return 0;
}
