#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float salario, qntSalario;
	
	printf("Digite seu sal�rio: ");
	scanf("%f",&salario);
	
	qntSalario = salario / 1412;
	
	system("cls||clear");
	printf("\n=== Exibindo resultados ===\n");
	printf("\nSal�rio: %3.f", salario);
	printf("\nQuantidade de sal�rios m�nimos: %2.f", qntSalario);
	
	return 0;
}
	
	
