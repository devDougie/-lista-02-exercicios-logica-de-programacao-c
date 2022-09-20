
#include<stdio.h>

int main(){
	int ano,nascimento,idade;
	char trabalho;
	puts("Digite o ano atual: ");
	scanf("%d",&ano);
	puts("Digite o ano do seu nascimento: ");
	scanf("%d",&nascimento);
	idade=ano-nascimento;
	printf("Sua idade atual e: %d anos.",idade);
	if((idade>=18)&&(idade<=65)){
		puts("\nEleitor obrigatorio (entre 18 e 65 anos).");
	}else if((idade>=16) && (idade<=18) || (idade>=65)){
		puts("\nEleitor facultativo (entre 16 e 18 anos ou maior de 65 anos).");
	}else{
		idade<16;
		puts("\nNao-eleitor (abaixo de 16 anos).");
	}
	return 0;
}