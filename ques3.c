// Function to sort an array using pointer
#include <stdio.h>
void SortArray(int* ptr, int size)
{
    int r, i, temp;
    for(r = 1; r < size; ++r)
    {
        for(i = 0; i < size - r; ++i)
        {
            if(ptr[i] > ptr[i + 1])
            {
                temp = ptr[i];
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = temp;
            }
        }
    }
}