#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int matriz[N][N], maiorLinha[N];

    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i=0; i<N; i++) {
        maior = matriz[i][0];
        for (int j=1; j<N; j++) {
            if (maior < matriz[i][j]) {
                maior = matriz[i][j];
            }
        }
        maiorLinha[i] = maior;
    }

    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for (int i=0; i<N; i++) {
        printf("%d\n", maiorLinha[i]);
    }


    return 0;
}
