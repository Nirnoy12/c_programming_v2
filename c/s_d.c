#include <stdio.h>
#include <stdlib.h> // for abs function

void sumAndDifference(int *x, int *y) {
    int sum = *x + *y;
    int difference = abs(*x - *y);
    *x = sum;
    *y = difference;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    sumAndDifference(&x, &y);

    printf("Sum: %d\n", x);
    printf("Absolute difference: %d\n", y);

    return 0;
}
