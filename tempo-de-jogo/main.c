#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaInicial, horaFinal;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);

    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if (horaInicial < horaFinal) {
        printf("O JOGO DUROU %d HORA(S)\n", horaFinal - horaInicial);
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - (horaInicial - horaFinal));
    }


    return 0;
}
