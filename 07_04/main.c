#include <stdio.h>
#include <stdlib.h>

    int main() {
    int alsohatar, felsohatar, i, j;
    int volt_e
    int_beolvas(&alsohatar);

do {
    int_beolvas(&felsohatar);
} while (felsohatar < alsohatar);
for (i=alsohatar; i<=felsohatar; i++){
    for (j=i+1;j<=felsohatar;j++) {
    if (baratsagos(i, j)==1){
    printf("(%d,%d)\n", i, j);
    volt_e=1;
    }

    }
}
if(volt_e==0){
    printf("nincs ilyen szampar")
}
return 0;
}

void int_beolvas(int* x) {
    char ch;
    int ok;

 do {
    ok = 1;
    printf("Adj meg egy számot: ");
        if(scanf("%d", x)!=1) {
            printf("Hibás input\n");

            while ((ch=getchar()) != '\n');
            ok = 0;
    }
 }
while( !ok || *x<0 );
}

int kisebboszto_osszeg(int szam) {
    int osszeg, oszto;
    osszeg=0;
 for (oszto=1; oszto<=szam/2; oszto+=1) {
    if (szam%oszto == 0)
    osszeg += oszto;
}
 return osszeg;
}

