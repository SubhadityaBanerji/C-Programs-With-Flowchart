/*
 C program to find the smallest number in an array.
*/

#include <stdio.h>

int main() {

    int i, num;


    printf("\nEnter Number Of Elements You Want To Compaire(1 to N, Decimals Accepted): ");
    scanf("%d", &num);

    if (num > 0) {
        float arr[num];
        printf("\n");
        for (i = 0; i < num; i++) {
            printf("Enter Number %d: ", i + 1);
            scanf("%f", &arr[i]);
        }

        // Loop to store largest number to arr[0]
        for (i = 1; i < num; ++i) {
            // Change < to > if you want to find the smallest element
            if (arr[0] < arr[i])
                arr[0] = arr[i];
        }
        printf("\nLargest element = %.2f\n", arr[0]);

        return 0;
    }

    else {
        printf("Enter A Number Greater Than Zero");
    }

}
