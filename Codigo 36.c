#include <stdio.h>
#include <stdlib.h>

//Permita no maximo tres tentativas para acertar a senha.


int main() {
	int senha = 1234;
	int tentativa = 0;
	int tentativas = 0;
	
	while (tentativa != senha && tentativas < 3) {
		printf("Digite a senha: ");
		scanf("%d", &tentativa);
		
		tentativas++;
		
		if (tentativa != senha) {
			printf("Senha incorreta!\n");
		}
	}
	
	if (tentativa == senha) {
		printf("Acesso autorizado\n");
	} else {
		printf("Usuario bloqueado\n");
	}
	
	return 0;
}
