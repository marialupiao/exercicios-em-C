#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);
    printf("Digite a medida B: ");
    scanf("%lf", &B);
    printf("Digite a medida C: ");
    scanf("%lf", &C);

    areaQuadrado = A * A;
    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);

    areaTriangulo = (A * B) / 2;
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);

    areaTrapezio = ((A + B) * C) / 2;
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);

    return 0;
}
