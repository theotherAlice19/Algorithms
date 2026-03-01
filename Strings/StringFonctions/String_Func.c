#include <stdio.h>
#include <string.h>

int String_Func() 
{
    char a[] = "hello";
    char b[20];

    printf("Length: %lu\n", strlen(a));   

    strcpy(b, a);                          
    printf("Copy: %s\n", b);

    printf("Compare: %d\n", strcmp(a, b)); 

    strcat(b, " world");                   
    printf("hello: %s\n", b);

    return 0;
}
