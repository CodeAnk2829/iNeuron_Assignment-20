// Program to count the no. of vowels and consonants in a given string using a pointer
#include <stdio.h>
#include <string.h>
void CountVowCons(char*);
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = 0;
    CountVowCons(strlwr(str));
    return 0;
}
void CountVowCons(char* ptr)
{
    char temp[6] = "aeiou";
    int i, j, count_vowels = 0;
    int count_spaces = 0;
    for(i = 0; ptr[i]; ++i)
    {
        for(j = 0; temp[j]; ++j)
        {
            if(ptr[i] == temp[j]) {
                count_vowels++;
            }
        }
        if(ptr[i] == ' '){
            count_spaces++;
        }
    }
    printf("No. of vowels: %d", count_vowels);
    printf(" %d", strlen(ptr));
    printf("\nNo. of consonants: %d", strlen(ptr) - count_vowels - count_spaces);
}