/* Escrever um algoritmo que lê uma matriz A 15x5 e a escreva. Verifique, a seguir, */
/* quais os elementos de A que estão repetidos e quantas vezes cada um está */
/* repetido. Escrever cada elemento repetido com uma mensagem dizendo que o */
/* elemento aparece X vezes em A. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>

int main (void) {
  int rows = 2;
  int columns = 2;
  int tamMatriz = rows * columns;
  int A[rows][columns];

  /* Atribuição dos valores às posições da matriz */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("\nDigite o valor para a posição A[%d][%d] da matriz: ", i + 1, j + 1);
      scanf("%i", &A[i][j]);
    }
  }

  /* Validação para checar se existem números repetidos na matriz */
  int res[tamMatriz];
  int resIdx = 0;

  for (int i = 0; i < rows; i++) {
    for (int j = 0; i < columns; j++) {
      res[resIdx] = A[i][j];
      resIdx++;
    }
  }
  
  for (int i = 0; i < tamMatriz; i++) {
    /* printf(" %d ", res[i]); */
    printf(" %d ", tamMatriz);
  }
  
  /* Imprimindo a matriz de forma organizada */
  printf("\n Matriz:\n");
  
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (j == columns - 1) {
	printf(" %d\n", A[i][j]);
      } else {
	printf(" %d ", A[i][j]);
      }
    }
  }

  return 0;
}
