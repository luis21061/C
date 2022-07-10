#include <stdio.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int x, y, soma;

    printf("Digite o valor de X: ");
    scanf("%d", &x);

    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;

    printf("SOMA = %d\n", soma);

    return 0;
}
