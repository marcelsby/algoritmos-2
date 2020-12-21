/* Escrever um algoritmo que lê uma matriz A 15x5 e a escreva. Verifique, a seguir, */
/* quais os elementos de A que estão repetidos e quantas vezes cada um está */
/* repetido. Escrever cada elemento repetido com uma mensagem dizendo que o */
/* elemento aparece X vezes em A. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#include <string.h>

int main (void) {
  int rows = 2;
  int columns = 2;
  int A[rows][columns];
  int tamMatriz = sizeof(A)/sizeof(int);

  A[0][0] = 2;
  A[0][1] = 2;
  A[1][0] = 2;
  A[1][1] = 2;

  /* /\* Atribuição dos valores às posições da matriz *\/ */
  /* for (int i = 0; i < rows; i++) { */
  /*   for (int j = 0; j < columns; j++) { */
  /*     printf("\nDigite o valor para a posição A[%d][%d] da matriz: ", i + 1, j + 1); */
  /*     scanf("%i", &A[i][j]); */
  /*   } */
  /* } */

  /* Porte da matriz para um vetor já agrupando os valores repetidos */
  int res[tamMatriz];
  int resQtd[tamMatriz];
  memset(res, 0, sizeof(res));
  memset(resQtd, 0, sizeof(resQtd));

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < columns; c++) {
      for (int i = 0; i < tamMatriz; i++) {
	if (A[r][c] == res[i]) {
	  resQtd[i]++;
	} else {
	  res[i] = A[r][c];
	  resQtd[i]++;
	}
      }
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
