
#include <stdio.h>

int main(){
    float valor;
    puts("Digite um valor:");
    scanf("%f", &valor);
    if (valor > 20){
        printf("O valor inserido e MAIOR que 20");
    }
    else if (valor < 20){
        printf("O valor inserido e MENOR que 20");
    }
    else{
        valor = 20;
        printf("O valor inserido e IGUAL a 20");
    }
    return 0;
}