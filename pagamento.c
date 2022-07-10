#include <stdio.h>



int main()
{

    char nome[50];
    double valor, total;
    int horas;


    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    total = horas * valor;

    printf("O pagamento para %s deve ser %.2lf", nome, total);


    return 0;
}
