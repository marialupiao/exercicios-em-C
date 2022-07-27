#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, indLinha, indColuna;
    double somaPositivos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    double matriz[N][N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    somaPositivos = 0;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (matriz[i][j] > 0) {
                somaPositivos = somaPositivos + matriz[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS: %.1lf\n\n", somaPositivos);

    printf("Escolha uma linha: ");
    scanf("%d", &indLinha);
    printf("LINHA ESCOLHIDA: ");

    for (int i=0; i<N; i++) {
        printf("%.1lf  ", matriz[indLinha][i]);

    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &indColuna);

    printf("COLUNA ESCOLHIDA: ");

    for (int i=0; i<N; i++) {
        printf("%.1lf  ", matriz[i][indColuna]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");

    for (int i=0; i<N; i++) {
        printf("%.1lf  ", matriz[i][i]);
    }

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = pow(matriz[i][j], 2);
            }
        }
    }

    printf("\n\nMATRIZ ALTERADA:\n");

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("%.1lf  ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
