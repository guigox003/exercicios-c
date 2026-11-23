#include <stdio.h>
#include "pagamento.h"

void exibir_formas() {
 printf("1 - PIX\n");
 printf("2 - Cartao\n");
 printf("3 - Dinheiro\n");
}

float calcular_desconto(float valor, int forma) {
 if (forma == 1) {
 return valor * 0.05;
 }
 return 0;
}

float calcular_total(float valor, int forma) {
 return valor - calcular_desconto(valor, forma);
}
