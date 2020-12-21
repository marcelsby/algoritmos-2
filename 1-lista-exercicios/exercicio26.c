/* Escrever um algoritmo que lê uma matriz A 15x5 e a escreva. Verifique, a seguir, */
/* quais os elementos de A que estão repetidos e quantas vezes cada um está */
/* repetido. Escrever cada elemento repetido com uma mensagem dizendo que o */
/* elemento aparece X vezes em A. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#include <string.h>
#define ROWS 2
#define COLUMNS 2

int resultado (int matriz[][COLUMNS], int res[], int resQtd[], int linhas, int colunas) {
  int tamMatriz = ROWS * COLUMNS;

  for (int i = 0; i < tamMatriz; i++) {
    if (&matriz[linhas][colunas] == &res[i]) {
      resQtd[i]++;
    } else {
      res[i] = matriz[linhas][colunas];
      resQtd[i]++;
    }
  }
}

int main (void) {
  int A[ROWS][COLUMNS];
  int tamMatriz = sizeof(A)/sizeof(int);

  A[0][0] = 5;
  A[0][1] = 3;
  A[1][0] = 2;
  A[1][1] = 1;

  /* /\* Atribuição dos valores às posições da matriz *\/ */
  /* for (int i = 0; i < ROWS; i++) { */
  /*   for (int j = 0; j < COLUMNS; j++) { */
  /*     printf("\nDigite o valor para a posição A[%d][%d] da matriz: ", i + 1, j + 1); */
  /*     scanf("%i", &A[i][j]); */
  /*   } */
  /* } */

  /* Porte da matriz para um vetor já agrupando os valores repetidos */
  int res[tamMatriz];
  int resQtd[tamMatriz];
  memset(res, 0, sizeof(res));
  memset(resQtd, 0, sizeof(resQtd));

  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLUMNS; c++) {
      resultado(A, res, resQtd, r, c); 
    }
  }

  /* printf("O elemento %d se repete %d vezes na matriz A.\n", res[i], repAux); */
  

  /* Printando o array */
  printf("\n");
  for (int i = 0; i < tamMatriz; i++) {
    printf(" %d ", res[i]);
  }
  printf("\n");
  for (int i = 0; i < tamMatriz; i++) {
    printf(" %d ", resQtd[i]);
  }
  printf("\n");
  
  /* Imprimindo a matriz de forma organizada */
  printf("\n Matriz:\n");
  
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      if (j == COLUMNS - 1) {
	printf(" %d\n", A[i][j]);
      } else {
	printf(" %d ", A[i][j]);
      }
    }
  }

  return 0;
}
