#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    long int eredmeny =1;
    char c;
    int ok;
    do{}
    printf("\nKerem a hatvany alapot es kitevot vesszovel elvalasztva:");
    if (scanf("%d, %d" &a, &b) ==2) {
    for(i=1; i<=b; i++){
        eredmeny *= a;
    }
    }else {
    printf("hibas adatok!");
    printf("\n%d .%d")
    return -1;
}
