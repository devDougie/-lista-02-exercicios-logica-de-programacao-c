
#include <stdio.h>

int main(){
    float valor1,valor2,soma;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	soma=valor1+valor2;
	printf("A soma entre os dois valores e: %.2f",soma);
    return 0;
}