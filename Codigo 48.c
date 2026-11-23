#include <stdio.h>
#include <stdlib.h>

//Armazene em uma matriz as três notas de cinco alunos. Calcule e exiba a média de cada aluno e sua
//situação (Aprovado para média >= 7 e Reprovado caso contrário). Ao final, informe a maior nota
//registrada na turma

int main() {
	int i, j;
	float notas[5][3];
	float soma = 0, media = 0, maior = 0;
	
	for (i = 0; i < 5; i++) {
		soma = 0;
		
		for (j = 0; j < 3; j++) {
			printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
			scanf("%f", &notas[i][j]);
			
			soma =  soma + notas[i] [j];
			
			if (i == 0 && j == 0) {
				maior = notas[i] [j];
			} else if (notas[i][j] > maior) {
				maior = notas[i][j];
		}
	}
	
	media = soma / 3;
	
	if (media >= 7) {
		printf("Aluno %d: Media %.2f - Aprovado\n", i + 1, media);
	} else {
		printf("Aluno %d: 	Media %.2f - Reprovado\n", i + 1, media);
    }
	
}
printf("\nMaior nota da turma: %.2f\n", maior);

	return 0;
}
