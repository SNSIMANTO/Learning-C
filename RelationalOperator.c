//>, >= ,<, <=, = ,!=
//control statement= 1)conditional control statement 2)loop control statement
//conditonal control statement= 1)if-else 2)switch
#include<stdio.h>
int main()
{
    int number;
    printf("Enter an intiger:");
    scanf("%d",&number);

   /* if(number%2==0)
        printf("Even\n");
    if(number%2!=0)
        printf("Odd\n"); */

    if(number%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}
