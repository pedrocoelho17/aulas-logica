#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numeroMacas;
	float precoUni, precoFinal;
	
	printf("Qual a quantidade de maçãs: ");
	scanf("%i",&numeroMacas);
	
	if(numeroMacas >= 12){
		precoUni = 1;
	}else{
		precoUni = 1.3;
	}
	
	precoFinal = numeroMacas * precoUni;
	
	system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nQuantidade de maçãs: %i", numeroMacas);
	printf("\nPreço final: %.2f", precoFinal);
	
	return 0;
	
}
