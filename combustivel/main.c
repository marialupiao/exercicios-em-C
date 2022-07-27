#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, alcool, gasolina, diesel;

    printf("Informe um codigo (1-alcool, 2-gasolina, 3-diesel) ou 4 para parar: ");
    scanf("%d", &codigo);

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (codigo != 4) {
        if (codigo == 1) {
            alcool++;
        }
        else if (codigo == 2) {
            gasolina++;
        }
        else if (codigo == 3) {
            diesel++;
        }
        printf("Informe um codigo (1-alcool, 2-gasolina, 3-diesel) ou 4 para parar: ");
        scanf("%d", &codigo);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);


    return 0;
}
