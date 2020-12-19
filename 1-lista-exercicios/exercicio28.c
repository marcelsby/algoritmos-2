/* Escreva um algoritmo que lê uma matriz M 5x5. Substitua, a seguir, todos os */
/* valores negativos da matriz pelo seu módulo. Exemplo: substitua -2 por 2, -16 */
/* por 16, assim por diante. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>

int main (void) {
  int rows = 2;
  int columns = 2;
  int M[rows][columns];

  /* Atribuição dos valores às posições da matriz */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("\nDigite o valor para a posição M[%d][%d] da matriz: ", i + 1, j + 1); 
      scanf("%i", &M[i][j]);
    }
  }

  /* Conversão dos números negativos para o seu módulo */
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (M[i][j] < 0) {
	M[i][j] = M[i][j] * -1;
      }
    }
  }

  /* Imprimindo a matriz de forma organizada */
  printf("\n Matriz:\n"); 
  
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (j == columns - 1) {
	printf(" %d\n", M[i][j]);
      } else {
	printf(" %d ", M[i][j]);
      }
    }
  }

  return 0;
}
