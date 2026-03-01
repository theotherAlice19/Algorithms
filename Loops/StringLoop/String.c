#include <stdio.h>

int string() 
{
    char str[] = "hello";
    for (int i = 0; str[i] != '\0'; i++) 
    {
        printf("%c\n", str[i]);
    }
    return 0;
}
