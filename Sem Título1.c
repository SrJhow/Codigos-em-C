#include <stdio.h>

//data: 22/09/2022
int main() {
	char nomes[3][30];
	int x;
	
	for(x=0;x<3;x++){
		printf("\nDigite o nome %d:",x+1);
		gets(nomes[x]);
	}
	for(x=0;x<3;x++){
		printf("\nnome %d : %s",x+1,nomes[x]);
	}
	
	return 0;
}
