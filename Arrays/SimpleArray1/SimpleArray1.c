#include <stdio.h>

void main() {

    int ar[10], c=1;

    for(int i=0; i<=9; i++) {
        ar[i] = c;
        c++;
    }

    printf("\nDisplaying the array: \n");

    for(int j=0;j<=9;j++) {

        printf("\n%d\n",ar[j]);
    }
}
