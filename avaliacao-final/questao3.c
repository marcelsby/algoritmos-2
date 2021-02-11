// Algoritmos II
// 2º TADS - IFG Jataí
// Marcel Barbosa

#include <stdio.h>
#include <stdlib.h>

int DIV (int n1, int n2);

int main (void) {
  int n1, n2, res; 
  printf("### Programa para calcular a divisão inteira entre dois números ####\n");
  
  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  res = DIV(n1, n2);

  if (res == -1) {
    printf("\nA divisão inteira entre %i e %i não é possível, pois o dividendo é menor que o divisor!\n", n1, n2);
  } else {
    printf("\nO resultado da divisão inteira entre %i e %i é: %i\n", n1, n2, res);
  }

  return 0;
}


int DIV (int n1, int n2) {
  int x, y;
  
  x = abs(n1);
  y = abs(n2); 

  int res;

  if (x == y) {
    return 1;
  } else if (x < y) {
    return -1;
  } else {
    res = 1 + DIV(x-y, y); 
    return res;
  }
} 
