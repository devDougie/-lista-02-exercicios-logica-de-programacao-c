
#include <stdio.h>

int main(){
    float celsius,fahrenheit;
	puts("Digite a temperatura em graus Celsius: ");
	scanf("%f",&celsius);
	fahrenheit=((celsius*9)/5)+32;
	printf("A temperatura em graus Fahrenheit e: %.1f",fahrenheit);
    return 0;
}