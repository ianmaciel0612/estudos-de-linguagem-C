#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int numero[5], positivos = 0, negativos = 0;;
    int i, pares = 0, impares = 0;
   
    for (i = 0; i < 5; i++) {
        printf("Digite o %i� n�mero:", i+1);
        scanf("%i",&numero[i]);
       
        if (numero[i] < 0) {
            negativos++;
        } else if (numero[i] > 0) {
            positivos++;
        }
       
        if (numero[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
   
    printf("\n=== Exibindo resultados === \n");
    printf("Exibindo n�meros digitados: \n");
    for (i = 0; i < 5; i++) {
        printf("%i� n�mero: %i \n", i+1, numero[i]);
    }
    printf("\nQuantidade de n�meros pares: %i \n", pares);
    printf("Quantidade de n�meros �mpares: %i \n", impares);
    printf("Quantidade de n�meros positivos: %i \n", positivos);
    printf("Quantidade de n�meros negativos: %i \n", negativos);
   
    return 0;
}
