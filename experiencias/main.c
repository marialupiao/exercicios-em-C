#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N, ratos, sapos, coelhos, qtdCobaias, total;
     char tipo;
     double pRatos, pSapos, pCoelhos;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    ratos = 0;
    sapos = 0;
    coelhos = 0;

    for (int i=0; i<N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtdCobaias);
        printf("Tipo de Cobaia (R - rato, S - sapo, C - coelho): ");
        scanf(" %c", &tipo);

        if (tipo == 'R') {
            ratos = ratos + qtdCobaias;
        }
        else if (tipo == 'S') {
            sapos = sapos + qtdCobaias;
        }
        else {
            coelhos = coelhos + qtdCobaias;
        }
    }

    total = ratos + sapos + coelhos;
    pCoelhos = ((double)coelhos / total) * 100.0;
    pRatos = ((double)ratos / total) * 100.0;
    pSapos = ((double)sapos / total) * 100.0;

    printf("\nRELATORIO FINAL:\n");
    printf("Total %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf\n", pCoelhos);
    printf("Percentual de ratos: %.2lf\n", pRatos);
    printf("Percentual de sapos %.2lf\n", pSapos);


    return 0;
}
