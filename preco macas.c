#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numeroMacas;
	float precoUni, precoFinal;
	
	printf("Qual a quantidade de ma��s: ");
	scanf("%i",&numeroMacas);
	
	if(numeroMacas >= 12){
		precoUni = 1;
	}else{
		precoUni = 1.3;
	}
	
	precoFinal = numeroMacas * precoUni;
	
	system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nQuantidade de ma��s: %i", numeroMacas);
	printf("\nPre�o final: %.2f", precoFinal);
	
	return 0;
	
}
