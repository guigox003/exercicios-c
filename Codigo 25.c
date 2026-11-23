#include <stdio.h>
#include <stdlib.h>

//Solicite ao usuário uma nota entre 0 e 10. Enquanto for informado um
//valor inválido, solicite novamente. O programa somente deve continuar quando uma nota
//válida for digitada.

int main() {
	float nota; 
	
	printf("Digite uma nota entre 0 e 10: ");
	scanf("%f", &nota);
	
	while (nota < 0 || nota > 10) {
		printf("Nota invalida! Digite novamente: ");
		scanf("%f", &nota);
	}
	printf("Nota valida: %.2f\n", nota);
	
	return 0;
}
