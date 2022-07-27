#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;

    printf("Digite dois numeros inteiros:\n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 % numero2 == 0 || numero2 % numero1 == 0) {
        printf("Sao multiplos\n");
    }
    else {
        printf("Nao sao multiplos\n");
    }


    return 0;
}
