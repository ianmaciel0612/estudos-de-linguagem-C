#include <stdio.h>
#include <locale.h>
#include <string.h>

	int main(){
		setlocate(LC_ALL,"");
		
		char resultado[200];
		float nota, soma = 0, media;
		int i;
		
		for(i = 1; i <= 3; i++) {
			scanf("%f", %nota);
		}while ( nota < 0 || nota > 10);
		
		soma += nota;
	}
	
		media = soma / --i;
		
		
		if(media >= 7) {
			strcpy(resultado, "aprovado");	
		}else if(media >= 4) {
			strcpy(resultado, "recuperação");
		}else {
			strcpy(resultado, "reprovado");
		}
		
		printf("\n=== exibindo resultados===\n");
		printf("media: %.1f \n", media);
		printf("resultado: %s \n", resultado);
		
		return 0;
		
	}
