#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	int letras;
	puts("Digite um nome: ");
	scanf("%s",&nome);
	letras=strlen(nome);
	printf("O nome digitado possui %d letras.",letras);
	return 0;
}