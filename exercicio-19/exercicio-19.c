
#include <stdio.h>

int main(){
	int numero;
	puts("Digite um numero: ");
	scanf("%d",&numero);
	if((numero>20) && (numero<80)){
		puts("Parabens!!!");
	}else{
		puts("Tente outra vez.");
	}	
	return 0;
}