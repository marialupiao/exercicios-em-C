#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, posMaior;
    double maiorValor;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vetor[N];

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vetor[i]);
    }

    maiorValor = vetor[0];
    posMaior = 0;

    for (int i=0; i<N; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            posMaior = i;
        }
    }

    printf("\n\nMAIOR VALOR = %.1lf\n", maiorValor);
    printf("POSICAO DO MAIOR VALOR = %d\n", posMaior);

    return 0;
}
