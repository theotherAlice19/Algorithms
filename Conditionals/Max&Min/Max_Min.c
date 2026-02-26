#include <stdio.h>

int main() 
{
    int arr[] = {3, 7, 1, 9, 4, 2, 8};
    int n = 7;
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
