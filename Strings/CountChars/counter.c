#include <stdio.h>

int counter() {
    char str[] = "hello world";
    int count = 0;
    char target = 'l';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) count++;
    }

    printf("'%c' appears %d times\n", target, count);
    return 0;
}
