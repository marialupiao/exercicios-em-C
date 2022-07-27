#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X;

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (int i=1; i<=X; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }


    return 0;
}
