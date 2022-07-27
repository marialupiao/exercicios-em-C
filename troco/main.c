#include <stdio.h>
#include <stdlib.h>



int main()
{
    double precoUnitario, dinheiroRecebido, troco;
    int qtdComprada;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &qtdComprada);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = 0;

    troco = dinheiroRecebido - (precoUnitario * qtdComprada);

    printf("TROCO = %.2lf\n", troco);


    return 0;
}
