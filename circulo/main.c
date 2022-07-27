#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = 0.0;

    area = 3.14159 * raio * raio;

    printf("AREA = %.3lf\n", area);

    return 0;
}
