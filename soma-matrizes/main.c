#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M, N;

    printf("Quantas linhas terao cada matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas terao cada matriz? ");
    scanf("%d", &N);

    int A[M][N], B[M][N], C[M][N];

    printf("Digite os valores da matriz A:\n");

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
             printf("Elemento [%d,%d]: ", i, j);
             scanf("%d", &B[i][j]);
        }
    }

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMATRIZ SOMA:\n");

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
