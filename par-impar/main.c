#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, valor;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &valor);

        if (valor == 0) {
            printf("NULO\n");
        }
        else {
            if (valor % 2 == 0) {
                printf("PAR");
            }
            else {
                printf("IMPAR");
            }
            if (valor > 0) {
                printf(" POSITIVO\n");
            }
            else {
                printf(" NEGATIVO\n");
            }
        }
    }



    return 0;
}
