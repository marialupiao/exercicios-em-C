#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, somaAcima;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int matriz[N][N];

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++) {
             printf("Elemento [%d,%d]: ", i, j);
             scanf("%d", &matriz[i][j]);
        }
    }

    somaAcima = 0;

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            if (i < j) {
                somaAcima = somaAcima + matriz[i][j];
            }
        }
    }

    printf("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", somaAcima);


    return 0;
}
