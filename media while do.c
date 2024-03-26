#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float notas, media, soma = 0;
	int i;
	
	for(i = 0; i < 2; i++){
    				
	 do{
    	printf("Digite a %i° nota: ", i + 1);
    	scanf("%f",&notas);
    	
	}while 	(notas < 0 || notas > 10);
	
	soma += notas;
}
	media = soma/2;
	
	system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nMédia: %.1f", media);
	
	return 0;
	
}
