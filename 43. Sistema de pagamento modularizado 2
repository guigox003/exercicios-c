#include <stdio.h>
#include <stdlib.h>
#include "pagamento.h"

// Leia o valor da compra e a forma de pagamento.
int main () {
 float valor = 0;
 int forma = 0;
 
 exibir_formas();
 
 printf("Digite o valor da compra: ");
 scanf("%f", &valor);
 
 printf("Escolha a forma de pagamento: ");
 scanf("%d", &forma);
 
 printf("Desconto: %.2f\n", calcular_desconto(valor, forma));
 printf("Total: %.2f\n", calcular_total(valor, forma));
 
 return 0;
}
