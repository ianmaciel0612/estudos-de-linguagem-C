#include <stdio.h>
#include <locale.h>

int main() {
	
	int primeiroNumero, segundoNumeo;
	float soma, media, produto
	int menorValor, maiorValor
	
	printf("escreva o primeiro numero: ");
	scanf("%s" ,&primeiroNumero);
	
	printf("escreva o segundo numero: ");
	scanf("%s" ,&segundoNumero);
	
	soma = primeiroNumero + segundoNumero;
	produto = primeiroNumero * segundoNumero;
	media = (primeiroNumero + segundoNumero);
	//media = (primeiroNumero + segundoNumero) /2;
	
	if (primeiroNumero > segundoNumero){
		maiorValor = primeiroNumero;
		menorValor = segundoNumeo;

	} else {
		maiorValor = segundoNumeo;
		menorValor = primeiroNumero;
	}

printf("\n===exibindo resultados===\n");
printf("primeiro numero: %i \n", primeiroNumero);
printf("segundo numero: %i \n\n", segundoNumeo);
printf("soma: %i \n", soma);
printf("produto: %i \n", produto);
printf("media: %.1f \n\n", media);

if(primeiroNumero == segundoNumeo){
	printf("os inumeros são iguais");
}else{
	printf("maior numero: %i \n", maiorValor);
	printf("menor numero: %i \n", menorValor);
}
return 0;
}

	
