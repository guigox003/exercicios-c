#include <stdio.h>
#include <stdlib.h>

// Compras a partir de R$ 200 recebem frete gratis.
// As demais pagam R$ 20,00.

int main() {
	
	float compra = 0;
	float frete = 0;
	float total = 0;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &compra);
	
	if (compra >= 200) {
		frete = 0;
	} else {
		frete = 20;
	}
	
	total = compra + frete; 
	
	printf("Valor da compra: %.2f\n", compra);
	printf("Valor da frete: %.2f\n", frete);
	printf("Valor da pedido: %.2f\n", total);
	
	return 0;
}
