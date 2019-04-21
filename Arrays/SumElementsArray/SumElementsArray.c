/*
 C prgram to find the sum of elements in an array.
*/

#include <stdio.h>

int main() {

    int num, sum=0;
    printf("\n\nEnter The Number Of Elements In The Array: ");
    scanf("%d", &num);

    int arr[num];

    printf("\nEnter The Elements: \n\n");

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for(int j=0; j<num; j++) {
        sum+=arr[j];
    }

    printf("\nThe sum is: %d\n", sum);
}
