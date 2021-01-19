#include <stdio.h>

float calcularIMC (float peso, float altura) {
	float IMC;

	IMC = peso / (altura * altura);

	return IMC;
}

int main(void) {
	// Criando a struct;
	struct pessoa {
		char  nome[50];
		int   idade;
		float altura;
		float peso;
		float IMC;
	};

	// Criando a variável marcel que é uma 
	// "instância" da estrutura pessoa;
	struct pessoa marcel;

	printf("\nInsira seu nome completo: ");
	fgets(marcel.nome, 50, stdin);

	printf("\nInsira sua idade: ");
	scanf("%d", &marcel.idade);

	printf("\nInsira sua altura: ");
	scanf("%f", &marcel.altura);

	printf("\nInsira sua peso: ");
	scanf("%f", &marcel.peso);

	// Calculando o IMC da pessoa inserida
	marcel.IMC = calcularIMC(marcel.peso, marcel.altura);

	// Exibindo os dados da pessoa inseridos na struct
	printf("\nSeus dados:");
	printf("\nNome: %s", marcel.nome);
	printf("Idade: %d", marcel.idade);
	printf("\nAltura: %.2f", marcel.altura);
	printf("\nPeso: %.2f", marcel.peso);
	printf("\nÍndice de Massa Corporal: %.2f\n", marcel.IMC);

	return 0;
}