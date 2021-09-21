#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam, oszto, db=0;
    printf("Kerek egy szamot\n");
    scanf("%d", &szam);

    oszto = 1;
    while (oszto <= szam) {
        if (szam % oszto == 0)
        db++;
        oszto++;



    }
    printf("\nOsztok szama: %d\n", db);

    int i,db2=0;
    for (i=1; i<=szam; i++) {
        if (szam%i == 0) {
            db2++;
        }

    }





    return 0;
}
