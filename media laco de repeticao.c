#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	float notas, media, soma;
	

	for(i = 0; i < 3; i++){
	printf("Digite a %i° nota: ", i + 1);
	scanf("%f",&notas);
	
	soma += notas;
}

	
	media = soma/3;
	
	printf("Média: %.2f", media);
	if(media >= 7){
		printf("\nAprovado!");
	}else{
		printf("\nReprovado!");
	}
	
	return 0;
	
}
