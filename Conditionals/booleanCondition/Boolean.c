#include <stdio.h>

int bool() 
{
    int age = 20;
    int ID = 1;

    if (age >= 18 && ID) {
        printf("Access granted\n");
    }

    if (age < 13 || age > 60) {
        printf("Special pricing\n");
    }

    if (!ID) {
        printf("No ID, no entry\n");
    }
    return 0;
}