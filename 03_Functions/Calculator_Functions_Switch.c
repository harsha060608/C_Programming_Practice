#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
float divide(float, float);

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");

    scanf("%d %d", &a, &b);

    printf("Choose an operation:\n");

    printf("1. Addition\n");

    printf("2. Subtraction\n");

    printf("3. Multiplication\n");

    printf("4. Division\n");

    printf("Enter your choice (1-4): ");

    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result: %d\n", add(a, b));
            break;

        case 2:
            printf("Result: %d\n", sub(a, b));
            break;

        case 3:
            printf("Result: %d\n", mul(a, b));
            break;

        case 4:
            if(b != 0)
            {
                printf("Result: %.2f\n", divide((float)a, (float)b));
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Invalid choice. Please select the number from given numbers.\n");
            break;
    }
}

int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}



