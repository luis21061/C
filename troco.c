#include <stdio.h>

int main()
{
    double qtdCompra, prcUnit, vlrRecebido, troco, ttlCompra;

    printf("Preco unitario do produto: ");
    scanf("%lf", &prcUnit);
    printf("Quantidade comprada: ");
    scanf("%lf", &qtdCompra);

    ttlCompra = prcUnit * qtdCompra;

    printf("TOTAL: %.2lf\n", ttlCompra);

    printf("Dinheiro Recebido: ");
    scanf("%lf", &vlrRecebido);

    troco = vlrRecebido - ttlCompra;

    printf("TROCO: %.2lf\n", troco);


    return 0;
}
