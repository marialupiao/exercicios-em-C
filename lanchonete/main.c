#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, qtdComprada;
    double valorPagar;


    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &qtdComprada);

    if (codigo == 1) {
        valorPagar = qtdComprada * 5.00;
    } else if (codigo == 2) {
        valorPagar = qtdComprada * 3.50;
    } else if (codigo == 3) {
        valorPagar = qtdComprada * 4.80;
    } else if (codigo == 4) {
        valorPagar = qtdComprada * 8.90;
    } else if (codigo == 5) {
        valorPagar = qtdComprada * 7.32;
    }

    printf("Valor a pagar: R$ %.2lf\n", valorPagar);




    return 0;
}
