#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	char letra[3]={"Aa"};
	int x,y,cont=0;
	puts("Digite um nome: ");
	scanf("%s",&nome);
	for(x=0;x<strlen(nome);x++){
		for(y=0;y<strlen(letra);y++){
			if(nome[x]==letra[y]){
				cont++;	
			}
		}
	}
	if(cont>=1){
		printf("O nome digitado tem %d caracteres com a letra 'A'.",cont);
	}else{
		printf("O nome digitado tem %d caracteres com a letra 'A'.",cont);
	}
	return 0;
}