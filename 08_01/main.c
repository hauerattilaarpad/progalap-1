#include <stdio.h>
#include <stdlib.h>

int main() {
    const int n = 12;
    float tomb[12];
    beolvas(tomb, n);
    kiir(tomb, n);
 return 0;
}
    void beolvas(float *tomb, int meret) {
        int i, ok;
        char ch;

    for(i=0; i<meret; i++) {
        do {
            ok = 1;
            printf("%d. ertek: ", i+1);
        if (scanf("%f", &tomb[i])!=1) {
            printf("Hibas input\n");
            ok = 0;
            }
        while ((ch=getchar()) != '\n');
 } while ( !ok );
 }
 return ;
}

void kiir(float *tomb, int meret) {
    int i;
 for(i=0; i<meret; i++) {
    printf("%d. ertek: %.2f \n", i+1, tomb[i]);
 }
 return ;
}
