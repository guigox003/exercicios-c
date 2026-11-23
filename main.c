#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

// Menu para realizar as quatro operacoes matematicas.

int main () {
 
 int opcao = 0;
 float a = 0, b = 0, resultado = 0;
 
 do {

 printf("\n1 - Somar\n");
 printf("2 - Subtrair\n");
 printf("3 - Multiplicar\n");
 printf("4 - Dividir\n");
 printf("0 - Sair\n");
 printf("Escolha uma opcao: ");
 scanf("%d", &opcao);

 if (opcao == 0) {
 break;
 }
 
 printf("Digite dois numeros: ");
 scanf("%f %f", &a, &b);
 
 switch (opcao) {
 case 1:
     resultado = somar(a, b);
     break;

 case 2:
     resultado = subtrair(a, b);
     break;
case 3:
     resultado = multiplicar(a, b);
     break;
 case 4:
     if (b == 0) {
        printf("Nao pode dividir por zero\n");
        continue;
 }
 resultado = dividir(a, b);
 break;
 
 default:
     printf("Opcao invalida\n");
     continue;
 }
 
 printf("Resultado: %.2f\n", resultado);
 
 } while (opcao != 0);
 
 return 0;
}
