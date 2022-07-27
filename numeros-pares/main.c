#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, qtdPares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vetor[N];

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nNUMEROS PARES:\n");

    qtdPares = 0;
    for (int i=0; i<N; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d  ", vetor[i]);
            qtdPares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", qtdPares);

    return 0;
}
