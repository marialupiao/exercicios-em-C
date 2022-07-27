#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    fatorial = 1;

    for (int i=N; i>0; i--) {
        fatorial = fatorial * i;
    }


    printf("FATORIAL = %d\n", fatorial);


    return 0;
}
