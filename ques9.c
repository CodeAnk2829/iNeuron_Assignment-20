// Program to print the elements of an array in reverse order.
#include <stdio.h>
void input(int *, int);
void ReverseArray(int *, int);
void display(int* , int);
int main()
{
    int arr[10];
    printf("Enter 10 numbers: ");
    input(arr, 10);
    ReverseArray(arr, 10);
    display(arr, 10);
    return 0;
}
void input(int *p, int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        scanf("%d", p + i);
    }
}
void ReverseArray(int* p, int size)
{
    int i, temp;
    for(i = 0; i < size/2; ++i)
    {
        temp = p[i];
        p[i] = p[size - 1 - i];
        p[size - 1 - i] = temp;
    }
}
void display(int *p, int size)
{
    int i;
    for(i = 0; i < size; ++i)
    {
        printf("%d ", p[i]);
    }
}