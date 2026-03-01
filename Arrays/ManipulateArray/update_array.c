#include <stdio.h>

int update_array() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    arr[2] = 99;
    printf("%d\n", arr[2]);
    return 0;
}
