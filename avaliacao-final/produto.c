#include <stdio.h>

int mult (int num, int contador, int resultado);

int main (void) {
  int n2, n1;
  int res_final;

  printf("### MULTIPLICAÇÃO ###");

  printf("\nDigite o primeiro número: ");
  scanf("%d", &n1);

  printf("\nDigite o segundo número: ");
  scanf("%d", &n2);

  int resultado = n1;

  res_final = mult(n1, n2, resultado);


  printf("\nRESULTADO: %d\n", res_final);

  return 0;
}

int mult (int num, int contador, int resultado) {  
  if (contador == 1) {
    return resultado;
  }

  resultado += num;
  contador--;
  mult(num, contador, resultado);
}