#include <stdio.h>

void fibonacci(int n) 
{
    int a = 0, b = 1;
    printf("%d ", a);
    if(n > 1) printf("%d ", b);
    for(int i = 2; i < n; i++) 
    {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n = 6;
    printf("First %d Fibonacci numbers: ", n);
    fibonacci(n);
    return 0;
}