#include<stdio.h>

int main(){
	int maior;
	int numeros;
	puts("Digite quantos valores quiser, pressione o numero '0' para encerrar e exibir o maior valor: ");
	while(numeros!=0){
		scanf("%d",&numeros);
		if(maior<numeros){
			maior=numeros;
		}		
	}
	printf("O maior valor digitado e %d.",maior);
	return 0;
}