#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salario, qntSalario;
	
	printf("Digite seu salário: ");
	scanf("%f",&salario);
	
	qntSalario = salario / 1412;
	
	system("cls||clear");
	printf("\n=== Exibindo resultados ===\n");
	printf("\nSalário: %3.f", salario);
	printf("\nQuantidade de salários mínimos: %2.f", qntSalario);
	
	return 0;
}
	
	
