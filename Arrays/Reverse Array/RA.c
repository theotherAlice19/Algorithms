#include <stdio.h>

void reverse(int arr[], int n) 
{
    int left = 0, right = n - 1;
    while (left < right) {
        int temp   = arr[left];
        arr[left]  = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}