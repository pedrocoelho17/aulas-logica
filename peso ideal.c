#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char sexo;
	float altura, pesoIdeal;
	
	printf("Digite 'M' ou 'F' para o sexo: ");
	scanf("%c",&sexo);
	
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	switch (sexo){
		case 'M':
			pesoIdeal = (72.7 * altura) - 58;
			break;
		case 'F':
			pesoIdeal = (62.1 * altura) - 44.7;
			break;
		default:
			printf("Opção inválida");
	}
	
    system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nPeso ideal: %.2f", pesoIdeal);
	
	return 0;
	
}
	
