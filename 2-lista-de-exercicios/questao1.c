/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>

float calcularIMC (float, float);

int main(void) {
	// Criando a struct;
	struct Pessoa {
		char  nome[50];
		char  sexo;
		int   idade;
		float peso;
		float altura;
	};

	int quantidadePessoas = 6;
	// Criando a variável composta homogênea pessoas que é uma 
	// "instância" da estrutura Pessoa;
	struct Pessoa pessoas[quantidadePessoas];

	for (int i = 0; i < quantidadePessoas; i++) {

		printf("\n#########################################\n");
		printf("\nCadastrando a %da pessoa:\n", i + 1);

		printf("\nInsira seu nome completo: ");
		fflush(stdin);
		fgets(pessoas[i].nome, 50, stdin);

		printf("Insira seu sexo 'M' ou 'F': ");
		scanf("%c", &pessoas[i].sexo);
		
		printf("Insira sua idade: ");
		scanf("%i", &pessoas[i].idade);

		printf("Insira seu peso: ");
		scanf("%f", &pessoas[i].peso);
	
		printf("Insira sua altura: ");
		scanf("%f", &pessoas[i].altura);
		printf("\n#########################################\n");
	}
	

	// Exibindo os dados da pessoa inseridos no array de pessoas
	for (int i = 0; i < quantidadePessoas; i++) {
		float IMC = 0; 

		printf("\n\n========================================");
		printf("\nDados da %da pessoa:", i + 1);
		printf("\nNome: %s", pessoas[i].nome);
		printf("Idade: %d", pessoas[i].idade);
		printf("\nPeso: %.2f", pessoas[i].peso);
		printf("\nAltura: %.2f", pessoas[i].altura);

		IMC = calcularIMC(pessoas[i].peso, pessoas[i].altura);

		if (IMC > 24.99) {
			// acima do peso
			printf("\nVocê está acima do peso.");
		} else if (IMC > 18.49) {
			// peso normal
			printf("\nVocê está no peso ideal.");
		} else {
			// abaixo do peso
			printf("\nVocê está abaixo do peso.");
		}
		printf("\n========================================\n");
	}

	return 0;
}

float calcularIMC (float peso, float altura) {
	float IMC;

	IMC = peso / (altura * altura);

	return IMC;
}