// Program to calculate length of a given string using pinters
#include <stdio.h>
#include <string.h>
int StringLen(char*);
int main()
{
    char s[100], result;
    printf("Enter a string: ");
    fgets(s, 100, stdin);
    s[strlen(s) - 1] = 0;
    result = StringLen(s);
    printf("The length of the given string is %d", result);
    return 0;
}
int StringLen(char* str)
{
    int i;
    for(i = 0; str[i]; ++i);
    return i;
}