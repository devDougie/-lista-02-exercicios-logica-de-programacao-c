#include <stdio.h>

int main(){
	int numero;
	puts("Digite um numero entre 1 e 4: ");
	scanf("%d",&numero);
	if((numero>1) && (numero<4)){
		printf("\nNumero digitado: %d",numero);	
	}else{
		puts("\nEntrada invalida! Tente novamente.");
	}
	return 0;
}