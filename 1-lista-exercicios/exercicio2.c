/* Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação */
/* dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. */
/* Mostre o vetor resultante. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>

int main (void) {
    int arr_length = 10;
    int max_index = arr_length - 1;

    int arr1[arr_length], arr2[arr_length], arr_res[arr_length];

    printf("\nCaptura de valores para o primeiro vetor:");

    for (int i = 0; i < arr_length; i++) {
        printf("\nDigite um valor para V[%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nCaptura de valores para o segundo vetor:");

    for (int i = 0; i < arr_length; i++) {
        printf("\nDigite um valor para V[%d]: ", i);
        scanf("%d", &arr2[i]);
    }

    // Cálculo do array resultante
    for (int i = 0; i < arr_length; i++) {
        arr_res[i] = arr1[i] * arr2[i];
    }

    // Print do array resultante
    printf("\nVetor Resultante:\n");
    printf("[ ");
    for (int i = 0; i < arr_length; i++) {
        if (i != max_index) {
            printf("%d, ", arr_res[i]);
        } else {
            printf("%d", arr_res[i]);
        }
    }
    printf(" ]\n");


    return 0;
}
