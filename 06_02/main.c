#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>
int main()
{
 int array[10];
 int i, size = sizeof(array)/sizeof(int);
 int divider, counter, minindex;
 bool found;
 srand(time(0));
 // t�mb felt�lt�se 10 �s 100 k�z� es� sz�mokkal
 for (i=0; i<size; i++) {
 array[i] = rand()%91+10;
 printf("%d. sz�m: %d\n", i+1, array[i]);
 }
 // legkisebb pr�msz�m keres�se
 counter = 0;
 for (i=0; i<size; i++) {
 found = false;
 divider = 2;
 while (divider < sqrt(array[i]) && !found) {
 if (array[i]%divider==0)
 found = true;
 divider++;
 }
 if (!found) { // ha pr�msz�m
 printf("Pr�msz�m: %d\n", array[i]);
 counter++;
 if (counter==1) // az els� pr�msz�m eset�n
 minindex = i;
 else if (array[i] < array[minindex]) // nem az els� pr�msz�m eset�n
 minindex = i;
 }
 }
 if (counter>0)
 printf("A legkisebb pr�msz�m: %d\n", array[minindex]);
 else
 printf("Nincs pr�msz�m a list�ban\n");
 return 0;
}
