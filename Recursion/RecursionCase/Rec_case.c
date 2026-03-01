#include <stdio.h>

int countdown(int n) 
{
    if (n == 0) return 0;         
    printf("%d\n", n);
    return countdown(n - 1);      
}
