
#include <stdio.h>

int main(){
    int valor1,valor2,soma;
	puts("Digite o primeiro valor: ");
	scanf("%d",&valor1);
	puts("Digite o segundo valor: ");
	scanf("%d",&valor2);
	soma=valor1+valor2;
	if(soma>35){
		printf("A soma dos dois valores e: %d",soma);
	}
return 0;
}
