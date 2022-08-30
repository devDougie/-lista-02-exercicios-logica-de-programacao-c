
#include <stdio.h>

int main(){
    float valor1, valor2, media;
    puts("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    puts("Digite o segundo valor: ");
    scanf("%f", &valor2);
    media = (valor1 + valor2) / 2;
    printf("A media entre os dois valores e: %.2f", media);
    return 0;
}