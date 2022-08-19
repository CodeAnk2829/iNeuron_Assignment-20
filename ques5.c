// Program to find the maximum number between two numbers using pointer
#include <stdio.h>
int FindMax(int*, int*);
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    result = FindMax(&a, &b);
    printf("%d is maximum", result);
    return 0;
}
int FindMax(int *p, int *q)
{
    if(*p > *q){
        return *p;
    } else {
        return *q;
    }
}