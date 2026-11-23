#include <stdio.h>
#include <stdlib.h>

// Leia o uso da CPU ate digitar -1.
// Classifique as leituras e conte as criticas.

int main() {
	int uso = 0;
	int leituras = 0;
	int criticas = 0;
	
	while (uso != -1) {
		printf("Uso da CPU (-1 encerra): ");
		scanf("%d", &uso);
		
		if (uso == -1) {
			break;
		}
		
		if (uso < 0 || uso > 100) {
			printf("Valor invalido!\n"); 
		} else {
			leituras++;
			
			if (uso <= 69) {
				printf("NORMAL\n");
			} else if (uso <= 89) {
				printf("ALERTA\n");
			} else {
				printf("CRITICO\n");
				criticas++;
			}
		}
	}
	
	printf("Total de leituras: %d\n", leituras);
	printf("Leituras criticas: %d\n, criticas");
	
	return 0;
}
