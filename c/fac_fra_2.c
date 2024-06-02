#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate sin(x) using Taylor series expansion
double sin_x(double x) {
    double result = 0;
    int i;
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0)
            result += pow(x, 2 * i + 1) / factorial(2 * i + 1);
        else
            result -= pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }
    return result;
}

int main() {
    double x;
    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);
    printf("sin(%lf) = %lf\n", x, sin_x(x));
    return 0;
}
