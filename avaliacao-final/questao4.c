// Algoritmos II
// 2º TADS - IFG Jataí
// Marcel Barbosa

#include <stdio.h>
#include <stdlib.h>

int pot(int base, int expoente); 
int mult(int prod1, int prod2);

int main (void) {
  int y, z;
  long int res_final;

  printf("### CALCULADORA DE POTÊNCIA COM SOMAS ###");

  printf("\nDigite a base da sua potência: ");
  scanf("%d", &y);

  printf("\nDigite o expoente da sua potência: ");
  scanf("%d", &z);

  res_final = pot(y, z);

  printf("\nRESULTADO: %ld\n", res_final);

  return 0;
}

int pot(int base, int expoente) {
  int resultado;

  if (expoente == 0) {
    return 1;
  } else {
    return ;
  }
} 


int mult(int prod1, int prod2); {

}
