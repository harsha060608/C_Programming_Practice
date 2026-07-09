#include <stdio.h>

int fun(int);

int main()
{
    int n; 

    printf("Enter a number: ");

    scanf("%d", &n);

    fun(n);

    return 0; 
}

int fun(int n)
{
    if(n == 0)
    {
        return 1; 
    }

    else
    {
        printf("%d\n", n);

        fun(n - 1);
    }
        
}