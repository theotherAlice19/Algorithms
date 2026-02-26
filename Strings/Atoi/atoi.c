#include <stdio.h>

int myAtoi(char str[]) 
{
    int result = 0, sign = 1, i = 0;

    while (str[i] == ' ') i++;

    if (str[i] == '-') { sign = -1; i++; }
    else if (str[i] == '+') i++;

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
}

int main() 
{
    printf("%d\n", myAtoi("123"));
    printf("%d\n", myAtoi("-456"));
    printf("%d\n", myAtoi("  42"));
    printf("%d\n", myAtoi("+789"));
    return 0;
}
