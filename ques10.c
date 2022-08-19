// Program to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>
void ReverseString(char*);
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = 0;
    ReverseString(str);
    printf("%s", str);
    return 0;
}
void ReverseString(char* ptr)
{
    int i, n;
    char temp;
    n = strlen(ptr);
    for(i = 0; i < n/2; ++i)
    {
        temp = ptr[i];
        ptr[i] = ptr[n - 1 - i];
        ptr[n - 1 - i] = temp;
    }
}