#include <stdio.h>
#include <stdlib.h>

int main() {
 int i, db=0;
 /* T�mb l�trehoz�sa inicializ�ci�s list�val */

 double tomb[ ] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
 int meret = sizeof(tomb)/sizeof(double); //t�mb m�ret�nek kisz�m�t�sa
 double limit=300.0;






 printf("HUF/EUR �rfolyamok:\n");
 for (i=0; i<meret; i+=1) {
 printf("%d. �rt�k: ", i+1, tomb[i]);
 /* Felt�telt kiel�g�t� elemek megsz�ml�l�sa */
 if (tomb[i] < limit) db++;
 }
 printf("Az �rfolyam �rt�ke %d-szer volt %.2f alatt.", db, limit);

 //B resze a feladatnak
 int found=0;

 for (i=1; i<meret && !found; i+=1) {
if (tomb[i] < tomb[i-1]) found=1; //tal�lt a monotonit�st elront� elemet
 }
 printf("A sorozat monoton novo: %s", !found ? "igaz" : "hamis");

}



//c feladat


/* Minimum kiv�laszt�s */
int minindex=0;
 for(i=0; i<meret; i++) {
 if(tomb[i]<tomb[minindex])
 minindex=i;
 }
 printf("\nA sorozat legkisebb eleme: %lf, sorsz�ma: %d", tomb[minindex], minindex);

/* Maximum kiv�laszt�s */
int maxindex=0;
 for(i=0; i<meret; i++) {
 if(tomb[i]>tomb[maxindex])
 maxindex=i;
 }
 printf("\nA sorozat legnagyobb eleme: %lf, sorsz�ma: %d", tomb[maxindex],
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
