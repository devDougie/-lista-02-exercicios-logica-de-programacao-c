#include <stdio.h>

int main(){
	int x,soma=0;
	for(x=1;x<=20;x++){	
		printf("(%d)",x);
		soma=soma+x;
	}
	printf("\n\nTotal da soma dos 20 primeiros numeros inteiros: %d",soma);
	return 0;
}