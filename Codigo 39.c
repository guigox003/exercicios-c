#include <stdio.h>
#include <stdlib.h>

// Leia varias vendas. O valor 0 encerra.
// Ignore valores negativos e calcule o ticket medio.

int main() {

	float venda = -1;
	float total = 0;
	float media = 0; 
	int quantidade = 0;
	
	while (venda != 0) {
		printf("Digite o valor da venda (0 encerra): ");
		scanf("%f", &venda);
		
		if (venda > 0) {
			total = total + venda;
			quantidade++;
		} else if (venda < 0) {
			printf("Valor ignorado!\n");
		}
	}
	
	if (quantidade > 0) {
		media = total / quantidade;
	}
	
	printf("Quantidade de vendas: %d\n", quantidade);
	printf("Faturamento total: %.2f\n", total);
	printf("Ticket medio: %.2f\n", media);
	return 0;
	
}
