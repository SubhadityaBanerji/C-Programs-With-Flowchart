/*
 C program to find the smallest, and the largest element in an array of n elements.
*/

#include <stdio.h>

int main() {

    int i, num;


    printf("\nEnter Number Of Elements You Want To Compaire(1 to num): ");
    scanf("%d", &num);

    float arr[num], temp[num];
    
    if (num > 0) {
        
        printf("\n");
        for (i = 0; i < num; i++) {
            printf("Enter Number %d: ", i + 1);
            scanf("%f", &arr[i]);
        }
        

        for(int l=0;l<num;l++) {
            temp[l] = arr[l];
        }


        for (i = 1; i < num; ++i) {
            if (arr[0] > arr[i]) {
                arr[0] = arr[i];
            }
        }
        

        for (int k = 0; k < num; k++) {
        if (temp[0] < temp[k]){
            temp[0]= temp[k];
        }
    }


        printf("\nThe Smallest And The Largest Number is: %.2f, %2f\n", arr[0], temp[0]);

        return 0;
    }

    else {
        printf("Enter A Number Greater Than Zero");
    }

}
