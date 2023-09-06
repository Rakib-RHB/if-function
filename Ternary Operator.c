
#include <stdio.h>

int main()
{
    int number;
    int absoluteValue;


    printf("Enter a number: ");
    scanf("%d", &number);


    absoluteValue = (number >= 0) ? number : -number;


    printf("The absolute value is: %d\n", absoluteValue);

    return 0;
}
