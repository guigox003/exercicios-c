#include <stdio.h>
#include <stdlib.h>
// Leia a quantidade disponivel de um produto.
// Mostre a situacao usando if/else e operador ternario.
int main () {
 int quantidade = 0;
     printf("Digite a quantidade em estoque: ");
     scanf("%d", &quantidade);
 
 if (quantidade > 0) {
     printf("Disponivel\n");
 } else {
      printf("Esgotado\n");
 }
 
 printf("Ternario: %s\\n", quantidade > 0 ? "Disponivel" : "Esgotado");
 
 return 0;
}
