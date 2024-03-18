#include <stdio.h>

int main(){
	float primeiroNumero, segundoNumero, divisao, soma, multiplicacao, subtracao;
	
	printf("Digite o primeiro número: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo número: ");
	scanf("%f",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	
	system("cls||clear");
	printf("\n ===Exibindo resultados===\n");
	printf("Soma: %f \n", soma);
	printf("Subtração: %f \n", subtracao);
	printf("Divisão: %f \n", divisao);
	printf("Multiplicação: %f \n", multiplicacao);
	
	return 0;
}






