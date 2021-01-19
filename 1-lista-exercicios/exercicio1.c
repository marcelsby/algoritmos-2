/* Faça um algoritmo que leia um vetor N[20]. A seguir, encontre o menor */
/* elemento do vetor N e a sua posição dentro do vetor, mostrando isso na tela. */
/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#define ARR_LENGTH 20 

int main (void) {
    // Declaração das variáveis
    int N[ARR_LENGTH];
    
    // Leitura dos valores do índice 0 até o 20 do array
    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("Insira o valor para a N[%d]: ", i);
        scanf("%i", &N[i]);
    }

    // Cálculo do menor valor do array
    int res[2];
    res[0] = N[0];
    res[1] = 0;
     for (int i = 1; i < ARR_LENGTH; i++) {
      if (N[i] < res[0]) {
	res[0] = N[i];
	res[1] = i;
      } 
    }

    printf("\nO menor valor do array inserido é: %d\nO índice de sua primeira ocorrência no array é: %d.\nSua primeira ocorrência se localiza na %da posição do array.\n", res[0], res[1], res[1] + 1);
    
    return 0;
}
