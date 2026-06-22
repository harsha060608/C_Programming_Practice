#include <stdio.h>

int main()
{
    int arr[] = {34, 56, 54, 32, 67};

    int i; 

    int size = sizeof(arr) / sizeof(arr[0]);

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for(i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}