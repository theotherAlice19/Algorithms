#include <stdio.h>

int break_continue() 
{
    for (int i = 0; i < 10; i++) 
    {
        if (i == 7) break;       
        if (i % 2 == 0) continue; 
        printf("%d\n", i);
    }
    return 0;
}