#include<stdio.h>
#include<string.h>

//data: 19/09/2022
//algoritmo: ENTRADA-PROCESSAMENTO-SAÍDA
main() {
	char palavra1[20],palavra2[20];
	int igual;
	
	printf("Digite a primeira palavra: \n");
	gets(palavra1);
	printf("Digite a segunda palavra: \n");
	gets(palavra2);
	igual=strcmp(palavra1,palavra2);
	if(igual==0){
		printf("\nPalavras iguais:");			
	}else{
		printf("\nPalavras sao diferentes");
	}	
	return 0;
	
	/*
	igual=1 primeiro nome é maior que o segundo nome.
	igual=-1 segundo nome é menor que o primeiro nome.
	*/
}
