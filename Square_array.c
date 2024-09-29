#include<stdio.h>

int main() {
    int arr[5] = {10, 2, 32, 4, 5};
    int i = 0;

    printf("Array elements: \n");
    for (i = 0; i < 5; i++) {
        // Corrected print to printf
        printf("%d ", arr[i]);
    }

    printf("\nSquare of Array elements: \n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", arr[i] * arr[i]);
    }

    return 0;
}
