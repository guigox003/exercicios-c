#include <stdio.h>
#include <stdlib.h>

//Defina um número secreto no programa. Solicite palpites repetidamente
//e informe se o número secreto é maior ou menor que o palpite fornecido. O programa deve
//terminar quando o usuário acertar e informar a quantidade de tentativas realizadas.

int main() {
	int secreto = 42;
	int palpite, tentativas = 0;
	
	printf("Adivinhe o numero secreto!\n");
	
	do {
		printf("Digite seu palpite: ");
		scanf("%d", &palpite);
		tentativas++;
		
		if (palpite > secreto)
		    printf("O numero secreto e menor.\n");
		else if (palpite < secreto)
		    printf("O numero secreto e maior.\n");
		else 
		    printf("Parabens! Voce acertou em %d tentativas.\n", tentativas);
		    
	} while (palpite != secreto);
	
	return 0;
}
