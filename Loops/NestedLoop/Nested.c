#include <stdio.h>

int nested() 
{
    for (int i = 1; i <= 3; i++) 
    {
        for (int j = 1; j <= 3; j++) 
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
