/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>

int negativos(float *arr, int N);

int main(void) {
	int tamanhoArray, qtdNumNegativos;

	printf("Insira o tamanho do seu array: ");
	scanf("%d", &tamanhoArray);

	float arrayUsuario[tamanhoArray];

	for (int i = 0; i < tamanhoArray; ++i)	{
		printf("Insira um valor para arrayUsuario[%d]: ", i);
		scanf("%f", &arrayUsuario[i]);
	}

	qtdNumNegativos = negativos(arrayUsuario, tamanhoArray);

	printf("\n========================================================\n");
	printf("O array inserido possui %d números negativos.", qtdNumNegativos);
	printf("\n========================================================\n");

	return 0;
}


int negativos(float *arr, int N) {
	int contadorNumNegativos = 0;

	for (int i = 0; i < N; i++)
		if (arr[i] < 0) 
			contadorNumNegativos++;

	return contadorNumNegativos;
}