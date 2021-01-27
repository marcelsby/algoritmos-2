/* Marcel Seichi Barbosa Yamamoto - 2º TADS */
#include <stdio.h>
#include <string.h>

// Criando a struct;
struct Pessoa {
	char  nome[50];
	char  sexo;
	int   idade;
	float peso;
	float altura;
};

// Protótipo das funções
float calcularIMC (float, float);

void mostrarPessoa (struct Pessoa *pessoa);

int main(void) {
	// Variável que armazena o total de usuários que o programa
	// cadastrará
	int quantidadePessoas = 2;

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

	for (int i = 0; i < quantidadePessoas; i++) {
		// Faço uma cópia temporária dos dados de cada usuário
		// para uma estrutura para passá-la como parâmetro
		// à função que mostra os dados de cada usuário.
		struct Pessoa temp;

		strcpy(temp.nome, pessoas[i].nome);
		temp.sexo = pessoas[i].sexo;
		temp.idade = pessoas[i].idade;
		temp.peso = pessoas[i].peso;
		temp.altura = pessoas[i].altura;

		mostrarPessoa(&temp);
	}

	return 0;
}

// Função que calcula e retorna o IMC
float calcularIMC (float peso, float altura) {
	float IMC;

	IMC = peso / (altura * altura);

	return IMC;
}

// Procedimento que mostra os dados finais de cada pessoa
void mostrarPessoa (struct Pessoa *pessoa) {
		// Calcula o IMC
		float IMC = calcularIMC(pessoa->peso, pessoa->altura); 
		static int contadorPessoa = 0;

		printf("\n\n========================================");
		printf("\nDados da %da pessoa:", contadorPessoa + 1);
		printf("\nNome: %s", pessoa->nome);
		printf("Idade: %d", pessoa->sexo);
		printf("\nPeso: %.2f", pessoa->peso);
		printf("\nAltura: %.2f", pessoa->altura);

		if (IMC > 24.99) {
			// acima do peso
			printf("\nAcima do peso.");
		} else if (IMC > 18.49) {
			// peso normal
			printf("\nPeso ideal.");
		} else {
			// abaixo do peso
			printf("\nAbaixo do peso.");
		}
		printf("\n========================================\n");

		contadorPessoa++;
}