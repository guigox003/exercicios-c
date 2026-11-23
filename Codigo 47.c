#include <stdio.h>
#include <stdlib.h>

//Leia 10 códigos numéricos e armazene-os em um vetor. Depois, solicite um código para busca. Informe
//se ele existe e, caso exista, em qual índice foi encontrado. Considere inicialmente apenas a primeira
//ocorrência

int main() {
	
	int i;
	int codigos[10];
	int procurado = 0;
	int indice = -1;
	
	for (i = 0; i < 10; i++) {
		printf("Digite o codigo %d: ", i + 1);
		scanf("%d", &codigos[i]);
	}
	
	printf("Digite o codigo que deseja procurar: ");
	scanf("%d", &procurado);
	
	for (i = 0; i < 10; i++) {
		if (codigos[i] ==procurado) {
			indice = i;
			break;
		}
	}
	
	if (indice == -1) {
		printf("Codigo nao encontrado\n");
	} else {
		printf("Codigo encontrado no indice %d\n", indice);
	}
	
	return 0;
}
