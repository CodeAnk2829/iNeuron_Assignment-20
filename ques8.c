// Program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int SumOfElements(int*, int);
void input(int* , int);

int main()
{
    int arr[10], result;
    printf("Enter 10 numbers: ");
    input(arr, 10);
    result = SumOfElements(arr, 10);
    printf("Sum of elements in the given array is %d", result);
    return 0;
}
void input(int* p, int size)
{
    int i;
    for(i = 0; i < size; ++i)
    {
        scanf("%d", p + i);
    }
}
int SumOfElements(int *p, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; ++i)
    {
        sum += p[i];
    }
    return sum;
}