#include<stdio.h>
#include<string.h>

//data: 19/09/2022
//algoritmo: ENTRADA-PROCESSAMENTO-SAÍDA
main() {
	char palavra[20];
	int tamanho;
	
		printf("\nDigite uma palavra: ");
		gets(palavra);
	
		tamanho=strlen(palavra);
		
		printf("\nTamanho da palavra: %d",tamanho);
				
	
	
	return 0;
}
