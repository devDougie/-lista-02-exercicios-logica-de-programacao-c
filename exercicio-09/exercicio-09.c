
#include <stdio.h>

int main(){
    float valor1,valor2,divisao;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	divisao=valor1/valor2;
	printf("A divisao entre os dois valores e: %.2f",divisao);
    return 0;
}