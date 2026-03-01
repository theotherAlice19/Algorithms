#include <stdio.h>

int Even(int n) {
    return n % 2 == 0;
}

void printEven(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (Even(arr[i])) printf("%d\n", arr[i]);
    }
}

int main() 
{
    printf("%d\n", add(3, 4));

    message("Youssef");

    int nums[] = {2, 4, 6, 8};
    printf("%.2f\n", average(nums, 4));

    int x = 5;
    pointer(&x);
    printf("%d\n", x);

    printf("%d\n", sum_square(3, 4));

    int arr[] = {1, 2, 3, 4, 5, 6};
    printEven(arr, 6);

    return 0;
}
