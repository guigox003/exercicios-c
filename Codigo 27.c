#include <stdio.h>
#include <stdlib.h>

//Leia um número inteiro positivo e determine se ele é primo//

int main() {
	int n, primo = 1;
	int i;
	
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &n);
	
	if (n < 2)
	    primo = 0;
	else {
		for ( i = 2; i <= n / 2; i++) {
			if (n % i == 0) {
				primo = 0;
				break;
			}
		}
	}
	
	if (primo)
        printf("%d e primo .\n", n);
    else 
        printf("%d nao e primo.\n", n);
    
	return 0;
}
