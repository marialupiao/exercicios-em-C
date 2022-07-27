#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, qtdHomens, qtdMulheres;
    double menorAltura, maiorAltura, alturaFemMedia, alturaFemTotal;


    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double alturas[N];
    char generos[N];

    for (int i=0; i<N; i++) {
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &alturas[i]);
        printf("Genero da %da pessoa: ", i+1);
        scanf(" %c", &generos[i]);
    }

    menorAltura = alturas[0];
    maiorAltura = alturas[0];

    for (int i=1; i<N; i++) {
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }
    }

    qtdHomens = 0;
    qtdMulheres = 0;
    alturaFemTotal = 0;

    for (int i=0; i<N; i++) {
        if (generos[i]=='M') {
            qtdHomens++;
        }
        else {
            qtdMulheres++;
            alturaFemTotal = alturaFemTotal + alturas[i];
        }

    }

    alturaFemMedia = alturaFemTotal / qtdMulheres;

    printf("Menor altura = %.2lf\n", menorAltura);
    printf("Maior altura = %.2lf\n", maiorAltura);
    printf("Media das alturas das mulheres = %.2lf\n", alturaFemMedia);
    printf("Numero de homens = %d\n", qtdHomens);

    return 0;
}
