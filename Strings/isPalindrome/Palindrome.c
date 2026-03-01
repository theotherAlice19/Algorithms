#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Palindrome(char str[]) 
{
    int left = 0, right = strlen(str) - 1;
    while (left < right) 
    {
        if (tolower(str[left]) != tolower(str[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}

int main() 
{
    char str[] = "Alice";
    if (Palindrome(str))
        printf("\"%s\" is a Palindrome\n", str);
    else
        printf("\"%s\" is NOT a Palindrome\n", str);
    return 0;
}
