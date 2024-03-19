#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char loginSalvo [150] = "pedro";
	char senhaSalva [150] = "12345";
	char login [150];
	char senha [150];
	
	printf("Digite o login: ");
	scanf("%s",&login);
	
	printf("Digite a senha: ");
	scanf("%s",&senha);
	
	if(strcmp(login, loginSalvo) == 0 && strcmp(senha, senhaSalva) == 0){
		printf("Bem vindo!");
	}else {
		printf("Acesso negado!");
	}
	
	return 0;
}

	
