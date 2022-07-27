#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, X, fora, dentro;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    fora = 0;
    dentro = 0;

    for (int i=0; i<N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &X);

        if (X < 10 || X > 20) {
            fora++;
        }
        else {
            dentro++;
        }
    }

    printf("%d DENTRO\n", dentro);
    printf("%d FORA\n", fora);

    return 0;
}
