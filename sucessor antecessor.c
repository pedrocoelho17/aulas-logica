#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero, sucessor, antecessor;
	
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	sucessor = numero + 1;
	
	antecessor = numero - 1;
	
	system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nN�mero: %i", numero);
	printf("\nSucessor: %i", sucessor);
	printf("\nAntecessor: %i", antecessor);
	
	return 0;
	
}
	
