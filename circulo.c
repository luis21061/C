#include <stdio.h>
#include <math.h>


int main()
{

    double r, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &r);

    area = 3.14159 * pow(r,2);

    printf("AREA = %.3lf\n", area);

    return 0;
}
