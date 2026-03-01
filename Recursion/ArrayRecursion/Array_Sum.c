#include <stdio.h>

int arraySum(int arr[], int size) 
{
    if (size == 0) return 0;
    return arr[0] + arraySum(arr + 1, size - 1);
}
