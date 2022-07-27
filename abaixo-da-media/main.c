#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double soma, media;

    printf("Quantos elementos terao cada vetor? ");
    scanf("%d", &N);

    double vetor[N];

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    soma = 0;

    for (int i=0; i<N; i++) {
        soma = soma + vetor[i];
    }

    media = soma / N;

    printf("\nMEDIA DO VETOR = %.3lf\n", media);
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");

    for (int i=0; i<N; i++) {
        if (vetor[i] < media) {
            printf("%.1lf\n", vetor[i]);
        }
    }

    return 0;
}
