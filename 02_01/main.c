#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerek egy egesz szamot");
    scanf("%d", &a);
    printf( (a % 2 == 0) ? " paros" : "paratlan");



    if (a % 2 == 0) {
        printf("paros");
    } else {
    printf("paratlan");
    }

    switch (a % 2) {
    case 0: printf("paros"); break;
    case 1: printf("paratlan"); break;
    default: printf("deafult ag"); break;
    }



    return 0;
}
