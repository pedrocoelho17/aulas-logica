#include <stdio.h>

int main(){
	char nome[150];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota, media;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	printf("Digite a primeira nota: ");
	scanf("%f",&primeiraNota);
	printf("Digite a segundaa nota: ");
	scanf("%f",&segundaNota);
	printf("Digite a terceira nota: ");
	scanf("%f",&terceiraNota);
	
	
	media = (primeiraNota + segundaNota + terceiraNota)/3;
	
	system("cls||clear");
	printf("\n=== Exibindo resultados ===\n");
	printf("Nome: %s \n", nome);
	printf("Idade: %i \n", idade);
	printf("Primeira Nota: %f \n", primeiraNota);
	printf("Segunda Nota: %f \n", segundaNota);
	printf("Terceira Nota: %f \n", terceiraNota);
	printf("Média: %f \n", media);

	if(media >= 7){
		printf("APROVADO!");
	}else{
		printf("REPROVADO!");
	}
	
	return 0;
	
	
	
	
}
