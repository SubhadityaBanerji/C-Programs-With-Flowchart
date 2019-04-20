/*
 C program to store five scanned numbers in an array, and print the squares of the numbers.
*/

#include <stdio.h>

void main() {

    int ar[5];

    printf("\nEnter the numbers: \n");

    for(int i=0; i<=4; i++) {
        printf("\n");
        scanf("%d",&ar[i]);

    }

    printf("\nDisplaying the array: \n");

    for(int j=0;j<=4;j++) {

        printf("\n%d\n",ar[j]*ar[j]);
    }
}
