
#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input three integers from the user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check for the maximum number
    if (num1 >= num2 && num1 >= num3)
    {
        printf("The maximum number is: %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The maximum number is: %d\n", num2);
    }
    else
    {
        printf("The maximum number is: %d\n", num3);
    }

    return 0;
}
