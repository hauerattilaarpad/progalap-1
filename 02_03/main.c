#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, sum=0;
    printf("\nKerek egy szamot:");
    scanf("%d", &n);
    i = 1;
    while (i<=n) {
        sum += i;
        i++;
    }
    printf("\nOsszeg: %d\n", sum);






    int n2, i2, sum2=0;
    do {
        sum2 +=n2;
        n2--;
    } while (n>0)



    return 0;
}
