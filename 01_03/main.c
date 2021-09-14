#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 0;
    double b = 0;

    printf("Kerem az A es B erteket:");
    scanf("%lf %lf",&a,&b);

    printf("osszeg: %.2lf/n",a+b);
    printf("kulonbseg: %.2lf/n",a-b);
    printf("szorzat: %.2lf/n",a*b);
    printf("osztas: %.2lf/n",a/b);

    return 0;
}
