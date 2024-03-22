#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome [200];
	float primeiraNota, segundaNota, media;
	char conceito;
	
	printf("Digite o nome: ");
	scanf("%s",&nome);
	
	fflush (stdin);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	
	fflush (stdin);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&segundaNota);
	
	fflush (stdin);
	
	media = (primeiraNota + segundaNota)/2; 
	
	if(media >= 9){
		conceito = 'A';	
	}else if(media >= 7.5 && media < 9){
		conceito = 'B';
	}else if(media >= 6 && media < 7.5){
		conceito = 'C';
	}else if(media >= 4 && media < 6){
		conceito = 'D';
	}else{
		conceito = 'E';
	}
	
	system("cls||clear");
	printf("=== Exibindo resultados ===");
	printf("\nNome: %s", nome);
	printf("\nPrimeira nota: %f", primeiraNota);
	printf("\nSegunda nota: %f", segundaNota);
	printf("\nMédia: %f", media);
	printf("\nConceito: %c", conceito);
	
	if(conceito == 'A' || conceito == 'B' || conceito == 'C'){
		printf("\nAprovado!");
	}else if(conceito == 'D' || conceito == 'E')
		printf("\nReprovado!");
	
	
	
	return 0;
	
}
	
