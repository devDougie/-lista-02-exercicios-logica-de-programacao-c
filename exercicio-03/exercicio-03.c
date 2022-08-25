
#include <stdio.h> 

int main(){
    float valor, metade;
	puts("Digite um valor: ");
	scanf("%f",&valor);
	if(valor>50){
		metade=valor/2;
		printf("A metade do valore e: %.1f",metade);
	}
return 0;
}
