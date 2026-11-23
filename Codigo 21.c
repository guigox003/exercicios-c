#include <stdio.h>
#include <stdlib.h>

//Leia 10 números e, ao final, informe quantos valores
//são positivos e quantos são negativos. Caso deseje, contabilize separadamente os valores
//iguais a zero.

int main() {
	float n;
    int i;
	int positivos = 0, negativos = 0, zeros = 0;
	
	for (i = 1; i <= 10; i++) {
		printf("Digite o numero %d: ", i);
		scanf("%f", &n);
		
		if (n > 0)
		    positivos++;
		else if (n < 0)
		    negativos++;
		else 
		    zeros++;
	}
	
	printf("Positivos: %d\n", positivos);
	printf("Negativos: %d\n", negativos);
	printf("Zeros: %d\n", zeros);
	
	return 0;
}
