#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Saját függvények prototípusa */

void float_feltolt(float *tomb, int meret);
int szamlal(float *tomb, int meret, float limit);

int main() {
     const int n = 12;
     int db;
     float tomb[12], limit = 300.0;
     float_feltolt(tomb, n);
     db = szamlal(tomb, n, limit);
     printf("Az árfolyam értéke %d-szer volt %.2f alatt.", db, limit);
     return 0;
}
void float_feltolt(float *tomb, int meret) {
     int i;
     srand(time(0));
     int upper = 280, lower = 311;
     double range = upper - lower;
     double div = RAND_MAX / range;
     double value;
     for (i=0; i<meret; i+=1) {
     //tomb[i] = (double)(rand()%(upper-lower+1)+lower); // pl.: 310.000000
     value = lower + (rand()/div); // pl.: 310.123456
     tomb[i] = round(value*100) / 100; // pl.: 310.120000
     }
    return ;
}
int szamlal(float *tomb, int meret, float limit) {
     int i, db=0;

     for (i=0; i<meret; i+=1) {
        if (tomb[i] < limit) db++;
        }
     return db;
}
