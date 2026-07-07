#include <stdio.h>

int main()
{
    int a[5], *p, found, flag = 0; 

    printf("Enter 5 numbers: ");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to search: ");

    scanf("%d", &found);

    for(p = a; p <= a + 4; p++)
    {
        if(*p == found)
        {
            printf("%d found at the position %d\n", found, p - a + 1);
            
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("%d not found in the array\n", found);
    }

    return 0;
}
