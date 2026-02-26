#include <stdio.h>

void fibonacci(int n) 
{
    int a = 0, b = 1;

    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
    }
}

int main() 
{
    int n = 10;
    printf("Fibonacci of %d terms:\n", n);
    fibonacci(n);
    return 0;
}
