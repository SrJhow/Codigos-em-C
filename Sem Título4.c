#include <stdio.h>

//data: 22/09/2022
int main() {
	char coluna,linha, letra[3][3];
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			scanf("%s",&letra[linha][coluna]);
		}
	}
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("[%s]",letra[linha][coluna]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
