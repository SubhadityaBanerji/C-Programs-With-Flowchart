/*
 C program to find the num of even and odd elements in an array of n numbers.
*/

#include <stdio.h>

int main() {

    int num, even=0, odd=0;

    printf("\n\nEnter The Number Of Elements In The Array: ");
    scanf("%d",&num);

    int arr[num];

    printf("\nEnter The Elements: \n\n");

    for(int i=0; i<num; i++) {
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<num; j++) {

        if(arr[j]%2==0) {
            even ++;
        }

        else {
            odd++;
        }
    }

    printf("\nThe Number Of Even Elements Are: %d\n", even);
    printf("The Number Of Odd Elements Are: %d\n", odd);

}
