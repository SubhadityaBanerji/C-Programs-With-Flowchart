/*
C program to create an array of 10. Initialize the array uisng loop. 1st element contains 1 square, 2nd element contains 2 square... Print the array.
*/

#include <stdio.h>

void main() {

    int ar[10];

    for(int i=0; i<=9; i++) {
        ar[i] = (i+1)*(i+1);

    }

    printf("\nDisplaying the array: \n");

    for(int j=0;j<=9;j++) {

        printf("\n%d\n",ar[j]);
    }
}
