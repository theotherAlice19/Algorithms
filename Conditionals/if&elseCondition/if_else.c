#include <stdio.h>

int if_else() 
{
    int x = 15;

    if (x > 20) {
        printf("big\n");
    } else if (x > 10) {
        printf("medium\n");
    } else {
        printf("small\n");
    }
    return 0;
}
