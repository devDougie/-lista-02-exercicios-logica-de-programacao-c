
#include <stdio.h>

int main(){
    float celsius,fahrenheit;
	puts("Digite a temperatura em graus Fahrenheit: ");
	scanf("%f",&fahrenheit);
	celsius=((fahrenheit-32)*5)/9;
	printf("A temperatura em graus Celsius e: %.1f",celsius);
    return 0;
}