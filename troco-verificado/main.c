#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precoUnitario, troco, dinheiroRecebido, insuficiente;
    int qtdComprada;

    printf("Preco unitario do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &qtdComprada);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    if (precoUnitario * qtdComprada > dinheiroRecebido) {
        insuficiente = precoUnitario * qtdComprada - dinheiroRecebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", insuficiente);
    }

    else {
        troco = dinheiroRecebido - precoUnitario * qtdComprada;
        printf("TROCO = %.2lf\n", troco);
    }




    return 0;
}
