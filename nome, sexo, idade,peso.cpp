#include <stdio.h>

int main(){
	// Declarando variáveis
	char nome[200] = "Marta"; // cadeia
	char sexo = 'F'; // caracter
	int idade = 20; // inteiro
	float peso = 58.400; // real
	
	// Exibindo resultados
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome); // %s -> string -> cadeia
	printf("Sexo: %c \n", sexo); // %c -> char -> caracter
	printf("Idade: %i \n", idade); // %i -> int -> inteiro
	printf("Peso: %f \n", peso); // %f -> float -> real
	
	return 0;
}
