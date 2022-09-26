#include <stdio.h>

//data: 22/09/2022
//funcionamento da matrix
int main() {
	int coluna,linha, num[3][3];
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			scanf("%d",&num[linha][coluna]);
		}
	}
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++){
			printf("[%d]",num[linha][coluna]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
