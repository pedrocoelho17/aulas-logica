#include <stdio.h>

int main(){
	float primeiroNumero, segundoNumero, divisao, soma, multiplicacao, subtracao;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f",&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
    subtracao = primeiroNumero - segundoNumero;
	divisao = primeiroNumero / segundoNumero;
	multiplicacao = primeiroNumero * segundoNumero;
	
	system("cls||clear");
	printf("\n ===Exibindo resultados===\n");
	printf("Soma: %f \n", soma);
	printf("Subtra��o: %f \n", subtracao);
	printf("Divis�o: %f \n", divisao);
	printf("Multiplica��o: %f \n", multiplicacao);
	
	return 0;
}






