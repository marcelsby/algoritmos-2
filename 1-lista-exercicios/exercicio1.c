/* Fa�a um algoritmo que leia um vetor N[20]. A seguir, encontre o menor */
/* elemento do vetor N e a sua posi��o dentro do vetor, mostrando isso na tela. */
/* Marcel Seichi Barbosa Yamamoto - 2� TADS */
#include <stdio.h>
#define ARR_LENGTH 20 

int main (void) {
    // Declara��o das vari�veis
    int N[ARR_LENGTH];
    
    // Leitura dos valores do �ndice 0 at� o 20 do array
    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("Insira o valor para a N[%d]: ", i);
        scanf("%i", &N[i]);
    }

    // C�lculo do menor valor do array
    int res[2];
    res[0] = N[0];
    res[1] = 0;
  
    for (int i = 1; i < ARR_LENGTH; i++) {
      if (N[i] < res[0]) {
	res[0] = N[i];
	res[1] = i;
      } 
    }

    printf("\nO menor valor do array inserido �: %d\nO �ndice de sua primeira ocorr�ncia no array �: %d.\nSua primeira ocorr�ncia se localiza na %da posi��o do array.\n", res[0], res[1], res[1] + 1);
    
    return 0;
}
