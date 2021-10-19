#include <stdio.h>
#include <stdlib.h>

int main() {
 int i, db=0;
 /* Tömb létrehozása inicializációs listával */

 double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
 int meret = sizeof(tomb)/sizeof(double); //tömb méretének kiszámítása
 double limit=300.0;






 printf("HUF/EUR árfolyamok:\n");
 for (i=0; i<meret; i+=1) {
 printf("%d. érték: ", i+1, tomb[i]);
 /* Feltételt kielégítõ elemek megszámlálása */
 if (tomb[i] < limit) db++;
 }
 printf("Az árfolyam értéke %d-szer volt %.2f alatt.", db, limit);

 //B resze a feladatnak
 int found=0;

 for (i=1; i<meret && !found; i+=1) {
if (tomb[i] < tomb[i-1]) found=1; //talált a monotonitást elrontó elemet
 }
 printf("A sorozat monoton novo: %s", !found ? "igaz" : "hamis");

}



//c feladat


/* Minimum kiválasztás */
int minindex=0;
 for(i=0; i<meret; i++) {
 if(tomb[i]<tomb[minindex])
 minindex=i;
 }
 printf("\nA sorozat legkisebb eleme: %lf, sorszáma: %d", tomb[minindex], minindex);

/* Maximum kiválasztás */
int maxindex=0;
 for(i=0; i<meret; i++) {
 if(tomb[i]>tomb[maxindex])
 maxindex=i;
 }
 printf("\nA sorozat legnagyobb eleme: %lf, sorszáma: %d", tomb[maxindex],
maxindex);




double osszeg=0;
for(int i=0; i<meret; i++) {
    osszeg= osszeg+tomb[i]
}
printf(" A tomb elemeinek atlaga: %lf", osszeg/meret)



printf("\nszoras\n+");
for (int i=0;i<meret;i++) {
    printf("%d. elem szorasa: %lf",i, atlag-tomb[i])



}















 return 0;
}
