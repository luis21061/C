#include <stdio.h>

int main()
{

    double a, b, c, areaQuad, areaTri, areaTrap;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuad = pow(a, 2);
    areaTri = a * b / 2;
    areaTrap = (a+b)*c/2;

    printf("AREA DO QUADRADO = %.4lf\n", areaQuad);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTri);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrap);

    return 0;
}
