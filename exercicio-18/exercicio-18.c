
#include <stdio.h>

int main(){
	int valor1, valor2,soma;
	puts("Digite dois valores, se a soma deles for maior que 10 sera exibida: ");
	scanf("%d %d",&valor1,&valor2);
	soma=valor1+valor2;
	if(soma>10){
		printf("A soma dos valores e igual a %d.",soma);
	}	
	return 0;
}