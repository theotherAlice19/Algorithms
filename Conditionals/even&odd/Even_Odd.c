#include <stdio.h>

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8;
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even: %d\n", even);
    printf("Odd:  %d\n", odd);

    return 0;
}
