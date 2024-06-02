#include <stdio.h>

void printFibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        printFibonacci(n - 1, b, a + b);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printFibonacci(n, 0, 1);
    printf("\n");
    return 0;
}
