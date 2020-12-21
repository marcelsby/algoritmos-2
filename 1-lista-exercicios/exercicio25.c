/* Escreva um algoritmo que lê uma matriz M 5x5 e calcula as somas: */
/* a. da linha 4 de M; */
/* b. da coluna 2 de M; */
/* c. da diagonal principal; */
/* d. da diagonal secundária */
/* e. de todos os elementos da matriz M */
/* Escrever essas somas e a matriz. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#define ROWS 5
#define COLS 5

int somaLinha (int matriz[][COLS], int linha){
  int total = 0;

  for (int i = 0; i < COLS; i++)
    total += matriz[linha][i];

  return total;
}

int somaColuna (int matriz[][COLS], int coluna){
  int total = 0;

  for (int i = 0; i < COLS; i++)
    total += matriz[i][coluna];

  return total;
}

int main (void) {
  int M[ROWS][COLS], tamMatriz = ROWS * COLS;
  /* Captura dos valores para a Matriz */
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      printf("\nDigite o valor para a posição A[%d][%d] da matriz: ", r + 1, c + 1);
      scanf("%i", &M[r][c]);
    }
  }

  /* Imprimindo a matriz de forma organizada */
  printf("\n Matriz M:\n");
  
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      if (c == COLS - 1) {
	printf(" %d\n", M[r][c]);
      } else {
	printf(" %d ", M[r][c]);
      }
    }
  }

  /* Soma da linha 4 da matriz M */
  int resSomaLinhaQuatro = somaLinha(M, 3); 

  printf("\nValor da soma da linha 4 da matriz M: %d\n", resSomaLinhaQuatro);
  
  /* Soma da linha 2 da matriz M */
  int resSomaColunaDois = somaColuna(M, 1); 

  printf("\nValor da soma da linha 2 da matriz M: %d\n", resSomaColunaDois);

  return 0;
}
