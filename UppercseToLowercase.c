#include<stdio.h>
int main()
{
    char upper;
    printf("Enter a uppercase letter:");
    scanf("%c",&upper);

    printf("The lowercase letter is %c",upper+32);
}
