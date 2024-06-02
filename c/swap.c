#include <stdio.h>

// Function to swap two integers using call by value
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("After swap x=%d and y=%d inside function\n", a, b);
}

// Function to swap two integers using call by address
void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("After swap x=%d and y=%d inside function\n", *a, *b);
}

int main() {
    int x = 5, y = 10;
    
    printf("Before swapping: x = %d, y = %d\n", x, y);
    
    // Call by value
    swap1(x, y);
    printf("After swap1 in main (call by value): x = %d, y = %d\n", x, y);
    
    // Call by address
    swap2(&x, &y);
    printf("After swap2 in main (call by address): x = %d, y = %d\n", x, y);
}

