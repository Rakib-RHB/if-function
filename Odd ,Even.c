
/*Write down a program that will take a
number n as input and will determine
whether it is an odd or even number*/


#include <stdio.h>
main()
{
    int n,r;
    printf("Enter a number:");
    scanf("%d", &n);
    r = n%2;
    if ( r == 0 )
        printf( "EVEN\n" );
                else
                    printf("ODD\n");
        }
