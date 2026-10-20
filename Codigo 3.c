#include <stdio.h>
#include <stdlib.h>

 //Leia uma temperatura em Celsius e converta para Fahrenheit.//

int main() {
    float celsius, fahrenheit;

    printf("Temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 9 / 5 + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
