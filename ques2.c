// Function to swap strings of two char arrays of calling functions.
#include <stdio.h>
#include <string.h>
void SwapStrings(char* str1, char* str2)
{
    char temp[200];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}