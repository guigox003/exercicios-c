#include <stdio.h>
#include <stdlib.h>

#define SETORES 3
#define VAGAS 5

//Construa um programa que represente um estacionamento com 3 setores e 5 vagas por setor usando
//uma matriz. O sistema deve possuir menu para: exibir vagas, ocupar vaga, liberar vaga, contar vagas
//livres e sair. Separe operações importantes em funções. Valide setor e vaga informados e impeça
//operações inconsistentes, como ocupar uma vaga já ocupada.

void mostrar(int estacionamento[SETORES] [VAGAS]) {
	int i, j;
	printf("\n0 = Livre | 1 = Ocupada\n");
	
	for (i = 0; i < SETORES; i++) {
		printf("Setor %d: ", i + 1);
		
		for (j = 0; j < VAGAS; j++) {
			printf("%d", estacionamento[i] [j]);
		}
		
		printf("\n");
	}
}

//Conta as vagas livres
int contar_livres(int estacionamento [SETORES] [ VAGAS]) {
	int quantidade = 0;
	int i, j;
	
	for (i = 0; i < SETORES; i++) {
		for (j + 0; j < VAGAS; j++) {
			if (estacionamento[i] [j] == 0) {
				quantidade++;
			}
		}
	}
	
	return quantidade;
}

// Ocupa ou libera uma vaga
void alterar_vaga(int estacionamento[SETORES][VAGAS], int ocupar) {
	int setor = 0, vaga = 0;
	
	printf("Digite o setor (1 a 3): ");
	scanf("%d", &setor);
	
	printf("Digite a vaga (1 a 5): ");
	scanf("%d", &vaga);
	
	if (setor < 1 || setor > 3 || vaga < 1 || vaga > 5) {
		printf("Posicao invalida\n");
	} else if(estacionamento[setor - 1] [vaga - 1] == ocupar) {
		printf("Operacao nao pode ser realizada\n");
	} else {
		estacionamento[setor - 1] [ vaga - 1] = ocupar;
		
		if (ocupar == 1) {
			printf("Vaga ocupada\n");
		} else {
			printf("Vaga liberada\n");
		}
	}
}

int main() {
	
	int estacionamento [SETORES] [VAGAS] = {{0}};
	int opcao = 0;
	
	do {
		printf("\n--- ESTACIONAMENTO ---\n");
		printf("1 - Exibir vagas\n");
		printf("2 - Ocupar vaga\n");
		printf("3 - Liberar vaga\n");
		printf("4 - Contar vagas livres\n");
		printf("0 - Sair\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao)	;
		
		switch (opcao) {
			case 1:
				mostrar(estacionamento);
				 break;
			case 2:
				alterar_vaga(estacionamento, 1);
				break;
			case 3:
				alterar_vaga(estacionamento, 0);
				break;
			case 4:
				printf("Vagas livres: %d\n", contar_livres(estacionamento));
			case 0:
				printf("Sistema encerrado\n");
				break;
			default:
				printf("Opcao invalida\n");
		}
	} while (opcao != 0);
	
	return 0;
}
