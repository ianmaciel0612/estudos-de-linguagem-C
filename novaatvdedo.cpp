#include <stdio.h>
#include <locale.h>
#include <string.h>


	int main(){
			setlocale(LC_ALL,"");
		
		float nota, soma = 0, media;
		int i;
		
		for (i =1; i <= 2; i++) {
			do{
				printf("digite a %i nota: ", i);
				scanf("%f", &nota);
				
			}while (nota < 0 || nota > 10);
		}
		
			soma += nota;
			
	}
	
		media = soma / 2;
		
		
		printf("\n===exibindo resultados===\n");
		printf("meida: %.1f \n", media);
		
		
		
		return 0;
	}

