#include<stdio.h>

int main() {
	char nome[200];
	int idade; 
	float primeiraNota, segundaNota;
	float soma, media;
	
	pritf("esceva seu nome: ");
	scanf( "%s", &nome);
	
	printf("escreva a primeira nota");
	scanf("%f" , &primeiraNota);
	
	printf("escreva a segunda nota");
	scanf("%f" , &segundaNota);
	
	soma = primeiraNota + segundaNota;
	media = soma/2;
	
	printf("\n===exibindo resultados===");
	printf("nome: %s \n", nome);
	printf("primeira nota %.1f \n", primeiraNota);
	printf("segunda nota %.1f \n", segundaNota);
	
	return 0;
  
}
