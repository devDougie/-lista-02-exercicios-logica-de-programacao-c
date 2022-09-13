#include<stdio.h>

int main(){
	int numero;
	for(numero=0;numero<200;numero++){
		if(numero%4==0){
			printf("%d\n",numero);
		}
	}
	return 0;
}