#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Kerek egy egesz szamot!\n");

    scanf("%d", &a);
    if(a<0) {
        a = a*(-1);

    }


   printf("a szam abszolut erteke: %d", a);




    return 0;
}
