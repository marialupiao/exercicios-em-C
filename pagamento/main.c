#include <stdio.h>
#include <stdlib.h>


int main()
{
    int horasTrabalhadas;
    double valorHora, pagamento;
    char nome[50];


    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    pagamento = 0;

    pagamento = horasTrabalhadas * valorHora;

    printf("O pagamento para %s deve ser de %.2lf\n", nome, pagamento);





    return 0;
}
