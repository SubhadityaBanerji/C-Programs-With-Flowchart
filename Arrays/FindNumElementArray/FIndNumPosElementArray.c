/*
 C program to find whether an element is present in ann element array or not, and print the position of the element in the array.
*/
#include <stdio.h>

int main() {

    int num, find, count=0;
    printf("\n\nEnter The Number Of Elements In The Array: ");
    scanf("%d", &num);

    int arr[num];

    printf("\nEnter The Elements: \n\n");

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter The Number To Find In The Array: ");
    scanf("%d",&find);

    for(int j=0; j<num; j++) {

        if(find == arr[j])
        {
            printf("\nThe Number Is Present In The Array!\n");
            printf("The Position Of The Number In The Array Is: %d\n",j+1);
            count++;
            break;
        }
    }

    if(count==0) {
        printf("\nThe Number Is Not Present In The Array.\n");
    }
}
