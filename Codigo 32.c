#include <stdio.h>
#include <stdlib.h>
// Leia uma quantidade em GB e converta para MB e KB.
int main () {
 
 float gb = 0;
 float mb = 0;
 float kb = 0;
 
 printf("Digite a quantidade em GB: ");
 scanf("%f", &gb);
 
 mb = gb * 1024;
 kb = mb * 1024;
 
 printf("Quantidade em MB: %.2f\n", mb);
 printf("Quantidade em KB: %.2f\n", kb);
 
 return 0;
}
