#include<stdio.h>
#include<string.h>

//data: 19/09/2022
//algoritmo: ENTRADA-PROCESSAMENTO-SAÍDA
main() {
	char palavra1[20],palavra2[20];
	int igual;
	//concatenar (ligar(-se), juntar(-se) numa cadeia ou sequência lógica)
	printf("Digite a primeira palavra: \n");
	gets(palavra1);
	printf("Digite a segunda palavra: \n");
	gets(palavra2);
	//processamento
	strcat(palavra1,palavra2);
	printf("\n%s",palavra1);
		
	return 0;
	
}
