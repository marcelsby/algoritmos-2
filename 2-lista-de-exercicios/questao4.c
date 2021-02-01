/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#include <string.h>

void imprimirMatriz (char matriz[][30], char *nome, int tamNome);

int main(void) {
	char nome[31] = "MARCEL SEICHI BARBOSA YAMAMOTO";

	int tamNome = strlen(nome);
	char matrizNome[tamNome][tamNome];

	imprimirMatriz(matrizNome, nome, tamNome);

	return 0;
}

void imprimirMatriz (char matriz[][30], char *nome, int tamNome) {
	int i = tamNome, j = tamNome;

	// DIAGONAL PRINCIPAL
	for (i = 0; i < tamNome; i++)
		for (j = 0; j < tamNome; j++)
			if (i == j) {
				matriz[i][j] = nome[i];
			} else {
				matriz[i][j] = '*';
			}

	// DIAGONAL SECUNDÁRIA
	for (i = tamNome; i > -1; i--)
		for (j = tamNome; j > -1; j--)
			if (j == tamNome - 1 - i)
				matriz[i][j] = nome[j];

	// PRINT MATRIZ FINAL
	for (i = 0; i < tamNome; i++)
		for (j = 0; j < tamNome; j++)
			if (j == tamNome - 1) {
				printf(" %c\n", matriz[i][j]);
			} else {
				printf(" %c", matriz[i][j]);
			}
}