#include <stdio.h>
#include <stdlib.h>

//Leia um número inteiro positivo e apresente todos os seus divisores.//

int main() {
	int n;
	int i;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	printf("Divisores de %d: ", n);
	for (i = 1; i <= n; i++)
	     if (n % i == 0)
	         printf ("%d ", i);
	printf("\n");
	
	return 0;
}
