
#include <stdio.h>

int main(){
	int numero;
	puts("Digite um numero: ");
	scanf("%d",&numero);
	if((numero%2==0) && (numero%5==0) && (numero%10==0)){
		printf("O numero %d e divisivel por 2, 5 e 10.",numero);
	}else if(numero%10==0){
		printf("O numero %d e divisivel por 10.",numero);
	}else if(numero%5==0){
		printf("O numero %d e divisivel por 5.",numero);
	}else if(numero%2==0){
		printf("O numero %d e divisivel por 2.",numero);
	}else{
		printf("O numero %d NAO e divisivel por 2, 5 ou 10.",numero);
	}
	return 0;
}