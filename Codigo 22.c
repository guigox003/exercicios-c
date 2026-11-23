#include <stdio.h>
#include <stdlib.h>

//Leia a quantidade de alunos de uma turma. Em seguida, leia a nota de cada
//aluno e apresente a média geral da turma.

int main() {
	int qtd;
	int i;
	float nota, soma = 0;
	
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &qtd);
	
	for (i = 1; i <= qtd; i++) {
		printf("Digite a nota do aluno %d: ", i);
		scanf("%f", &nota); 
		soma += nota;
	}
	
	printf("Media de turma: %.2f\n", soma / qtd);
	return 0;
}
