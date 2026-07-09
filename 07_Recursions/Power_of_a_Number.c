#include <stdio.h>

int fun(int base, int exponent)
{
    if (exponent == 0)
        return 1;

     return base * fun(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf("Enter the base:");

    scanf("%d", &base);

    printf("Enter the Exponent: ");

    scanf("%d", &exponent);

    int result = fun(base, exponent);

    printf("The result is: %d\n", result);

    return 0; 
}
