#include <stdio.h>
#include <stdlib.h>

//Crie um menu utilizando switch que permita escolher entre somar,
//subtrair, multiplicar e dividir dois números.

int main() {
	float a, b;
	int opcao;
	
	printf("Digite dois numeros: ");
	scanf("%f %f", &a, &b);
	
	printf("\nMenu de operacoes:\n");
	printf("1 - Somar\n");
	printf("2 - Subtrair\n");
	printf("3 - Multiplicar\n"); 
	printf("4 - Dividir\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Resultado: ¨%.2f\n", a + b);
			break;
		case 2:
			printf("Resultado: %.2f\n", a - b);
			break;
		case 3:
			printf("Resultado: %.2f\n", a * b);
			break;
		case 4:
			if (b == 0)
			    printf("Erro: divisao por zero!\n");
			else
			    printf("Resultado: %.2f\n", a / b);
			break;
		default:
			printf("Opcao invalida.\n");
	}
	
	return 0;
}
