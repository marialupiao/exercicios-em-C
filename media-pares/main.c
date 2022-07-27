#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, somaPares = 0, nPares =0;
    double mediaPares;

    printf("Quantos elementos terao no vetor? ");
    scanf("%d", &N);

    int vetor[N];

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i=0; i<N; i++) {
        if (vetor[i] % 2 == 0) {
            somaPares = somaPares + vetor[i];
            nPares++;
        }
    }

    if (nPares == 0) {
        printf("NENHUM NUMERO PAR\n");
    }
    else {
        mediaPares = (double)somaPares / nPares;
        printf("MEDIA DOS PARES = %.1lf\n", mediaPares);
    }

    return 0;
}
