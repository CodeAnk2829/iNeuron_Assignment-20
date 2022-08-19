// Function to swap two values stored in two variables using pinters
#include <stdio.h>
void Swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}