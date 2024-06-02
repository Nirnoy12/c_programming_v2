#include <stdio.h>

int main() {
    int arr[10]; // Declare an array of size 10
    int i;

    // Input values from the user and store in array
    printf("Enter 10 integer values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Display values along with memory locations
    printf("\nValues stored in the array along with their memory locations:\n");
    for (i = 0; i < 10; i++) {
        printf("Value: %d \t Memory Location: %p\n", arr[i],&arr[i]);
    }

    return 0;
}
