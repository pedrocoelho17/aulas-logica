#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int primeiroNumero, segundoNumero, soma, produto, maiorValor, menorValor;
	float media;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i",&primeiroNumero);
	
	printf("Digite o segundo n�mero: ");
	scanf("%i",&segundoNumero);
	
	media = (primeiroNumero + segundoNumero)/2;
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	if(primeiroNumero > segundoNumero){
		maiorValor = primeiroNumero; 
		menorValor = segundoNumero;
	}else{
		maiorValor = segundoNumero; 
		menorValor = primeiroNumero; 
	}
	
	system("cls||clear");
	printf("\n ===Exibindo resultados===\n");
	printf("\nPrimeiro n�mero: %i", primeiroNumero);
	printf("\nSegundo n�mero: %i", segundoNumero);
	printf("\nM�dia: %.2f", media);
	printf("\nSoma: %i", soma);
	printf("\nProduto: %i", produto);
	printf("\nMaior valor: %i", maiorValor);
	printf("\nMenor valor: %i", menorValor);
	
	return 0;
}
	
	
	
	
	
