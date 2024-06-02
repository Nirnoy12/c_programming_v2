#include <stdio.h>

// Function to calculate factorial
long fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter the number upto which you want the factorial of :\n");
    scanf("%d",&n);
    double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / fact(i);
    }

    printf("Sum of the series: %lf\n", sum);

    return 0;
}
