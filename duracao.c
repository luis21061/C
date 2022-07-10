#include <stdio.h>



int main()
{

    int n, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &n);

    horas = n / 3600;
    resto = n % 3600;

    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    system("pause");

    system("cls");

    return 0;

}
