#include <stdio.h>
#include <stdlib.h>

//Leia 10 números e informe qual foi o maior valor digitado//

int main() {
	float n, maior;
	int i;
	
	printf("Digite o numero 1: ");
	scanf("%f", &n);
	maior = n;
	
	for (i = 2; i <= 10; i++) {
		printf("Digite o numero %d: ", i);
		scanf("%f", &n);
		if (n > maior)
		    maior = n;
	}
	
	printf("Maior numero digitado: %.2f\n", maior);
	
	return 0;
}
