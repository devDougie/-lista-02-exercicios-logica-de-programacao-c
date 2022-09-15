
#include <stdio.h>

int main(){
	char nome[20],sexo;
	int idade;
	puts("Digite seu nome: ");
	scanf("%s",&nome);
	puts("Digite seu sexo: ");
	fflush(stdin);
	scanf("%c",&sexo);
	puts("Digite sua idade: ");
	scanf("%d",&idade);
	if(sexo=='m' && idade>=18){
		printf("%s - ALISTAMENTO\n",nome);
	}else{
		printf("%s - NAO ESTA APTO\n"),nome;
	}
	return 0;
}