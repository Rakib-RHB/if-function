
#include <stdio.h>

int main()
{
    int mark;

    // Input the student's mark
    printf("Enter the student's mark: ");
    scanf("%d", &mark);

    // Check the mark and determine the letter grade
    if (mark >= 90 && mark <= 100)
    {
        printf("Letter grade: A\n");
    }
    else if (mark >= 80 && mark < 90)
    {
        printf("Letter grade: B\n");
    }
    else if (mark >= 70 && mark < 80)
    {
        printf("Letter grade: C\n");
    }
    else if (mark >= 60 && mark < 70)
    {
        printf("Letter grade: D\n");
    }
    else if (mark >= 0 && mark < 60)
    {
        printf("Letter grade: F\n");
    }
    else
    {
        printf("Invalid input. Mark must be between 0 and 100.\n");
    }

    return 0;
}
