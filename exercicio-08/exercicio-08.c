
#include <stdio.h>

int main(){
    float valor1,valor2,subtracao;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	subtracao=valor1-valor2;
	printf("A subtracao entre os dois valores e: %.2f",subtracao);
    return 0;
}