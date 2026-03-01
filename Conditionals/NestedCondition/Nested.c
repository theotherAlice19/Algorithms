#include <stdio.h>

int nested() 
{
    int score = 75;
    int attended = 1;

    if (attended) 
    {
        if (score >= 50) 
        {
            printf("Pass\n");
        } else 
        {
            printf("Fail\n");
        }
    } else 
    {
        printf("Absent\n");
    }
    return 0;
}
