
#include <stdio.h>

int main(){
    char operacao;
    float valor1,valor2,soma,subtracao,multiplicacao,divisao;
	puts("Digite o primeiro valor: ");
	scanf("%f",&valor1);
	puts("Digite o tipo de operacao: ");
	scanf("%s",&operacao);
	puts("Digite o segundo valor: ");
	scanf("%f",&valor2);
	switch(operacao){
		//para escolher soma use: +;
		case '+':
		soma=valor1+valor2;
		printf("A soma entre os dois valores e: %.2f",soma);
		break;
		//para escolher subtração use: -;
		case '-':
		subtracao=valor1-valor2;
		printf("A subtracao entre os dois valores e: %.2f",subtracao);
		break;
		//para escolher multiplicação use: *;
		case '*':
		multiplicacao=valor1*valor2;
		printf("A multiplicacao entre os dois valores e: %.2f",multiplicacao);
		break;
		//para escolher divisão use: /;
		case '/':
		divisao=valor1/valor2;
		printf("A divisao entre os dois valores e: %.2f",divisao);
		break;
		default:
			printf("Opcao invalida digite novamente");	
	}
    return 0;
}