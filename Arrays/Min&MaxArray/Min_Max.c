#include <stdio.h>

int min_max() 
{
    int arr[5] = {3, 7, 1, 9, 4};
    int min = arr[0], max = arr[0], sum = 0;

    for (int i = 0; i < 5; i++) 
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    printf("Min: %d, Max: %d, Sum: %d\n", min, max, sum);
    return 0;
}
