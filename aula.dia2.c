#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	
	char loginSalvo[200] = "marta";
	char senhaSalva[200] = "123";
	char login[200];
	char senha[200];
	
	printf("digite o login: ");
	scanf("%s" ,&login);
	
	printf("digite a senha: ")
	scanf("%s" ,&senha);
	
	//if (login == loginSalvo && senha == senhaSalva)
	if (strcmp(login, loginSalva)== 0 && strcmp(senha, senhaSalva) == 0 ){
	printf("bemn vindo!");
	}else{
		printf("acesso negado!");
	}
	return 0;
}


