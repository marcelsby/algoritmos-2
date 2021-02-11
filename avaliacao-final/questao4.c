// Algoritmos II
// 2º TADS - IFG Jataí
// Marcel Barbosa

#include <stdio.h>
#include <stdlib.h>

int pot(int base, int expoente, int res_pot); 
int mult(int total, int base, int produto);

int main (void) {
  int n2, n1;
  int res_final;

  printf("### CALCULADORA DE POTÊNCIAS POSITIVAS UTILIZANDO SOMA ###");

  printf("\nDigite a base da sua potência: ");
  scanf("%d", &n1);

  printf("\nDigite o expoente da sua potência: ");
  scanf("%d", &n2);

  int resultado = n1;
  res_final = pot(n1, n2, resultado);

  printf("\nRESULTADO: %d\n", res_final);

  return 0;
}

int pot (int base, int expoente, int res_pot) {
  abs(base);
  abs(expoente);

  if (expoente == 0) {
    return 1;
  }

  res_pot = mult(res_pot, base, res_pot);

  expoente--;

  if (expoente == 1) {
    return res_pot;
  }
  
  pot(base, expoente, res_pot);
}


int mult (int num, int contador, int produto) {  
  if (contador == 1) {
    return produto;
  }

  produto += num;
  contador--;
  mult(num, contador, produto);
}
