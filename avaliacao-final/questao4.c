// Algoritmos II
// 2º TADS - IFG Jataí
// Marcel Barbosa

#include <stdio.h>
#include <stdlib.h>

int pot(int base, int expoente); 
int mult(int total, int base);

int main (void) {
  int y, z;
  int res_final;

  printf("### CALCULADORA DE POTÊNCIA COM SOMAS ###");

  printf("\nDigite a base da sua potência: ");
  scanf("%d", &y);

  printf("\nDigite o expoente da sua potência: ");
  scanf("%d", &z);

  res_final = pot(y, z);

  printf("\nRESULTADO: %d\n", res_final);

  return 0;
}

int pot(int base, int expoente) {
  int resultado = base;

  if (expoente == 0) {
    return 1;
  } else {
    for (int i = 1; i < expoente; i++)
      resultado += mult(resultado, base);

    return resultado;
  }
} 


int mult(int total, int base); {
  int res_mult = 0;  

  if (base != 0) {
    res_mult += total;
    base--;
    mult(total, base);
  } else {
    return res_mult;
  }
}
