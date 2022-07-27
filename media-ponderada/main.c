#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double valor, valor1, valor2, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i=0; i<N; i++) {
        printf("Digite tres numeros:\n");
        scanf("%lf %lf %lf", &valor, &valor1, &valor2);

        media = (valor * 2.0 + valor1 * 3.0 + valor2 * 5.0) / 10.0;

        printf("MEDIA = %.1lf\n", media);
    }


    return 0;
}
