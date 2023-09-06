#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input three integers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check for the second largest number
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
            printf("The second largest number is: %d\n", num2);
        }
        else
        {
            printf("The second largest number is: %d\n", num3);
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
            printf("The second largest number is: %d\n", num1);
        }
        else
        {
            printf("The second largest number is: %d\n", num3);
        }
    }
    else
    {
        if (num1 >= num2)
        {
            printf("The second largest number is: %d\n", num1);
        }
        else
        {
            printf("The second largest number is: %d\n", num2);
        }
    }

    return 0;
}

