#include <stdio.h>

int main(){
	int x,soma=0,media;
	for(x=-1;x>=-99;x--){
		printf("(%d) ",x);	
		soma=soma+x;
		media=soma/x;
	}
	printf("\n\nSoma de todos os valores lidos: %d",soma);
	printf("\n\nMedia de todos os valores lidos: %d",media);
	return 0;
}