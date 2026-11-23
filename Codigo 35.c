#include <stdio.h>
#include <stdlib.h>

// Crie um menu de atendimento utilizando switch.

int main() {
	int opcao = 0;
	
	printf("1 - Suporte tecnico\n");
	printf("2 - Financeiro\n");
	printf("3 - Comercial\n");
	printf("4 - Cancelamento\n");
	printf("Escolha um opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao) {
		case 1:
			printf("Suporte tecnico\n");
			break;
		case 2:
			printf("Financeiro\n");
		    break;
		case 3:
		    printf("Comercial\n");
		    break;
		case 4:
			printf("Cancelamento\n");
	        break;
	    default:
	    	printf("Opcao invalida\n");
	}
	
	return 0;
}
