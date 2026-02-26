#include <stdio.h>

int factorial(int n) {
    int r = 1;
    for (int i = 1; i <= n; i++)
        r *= i;
    return r;
}

int main() 
{
    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}
