#include <stdio.h>

long long factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() 
{
    for (int i = 0; i <= 10; i++)
        printf("factorial(%d) = %lld\n", i, factorial(i));
    return 0;
}
