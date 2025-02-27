#include<stdio.h>
int main()
{
    char lower;
    printf("Enter a lowercase letter:"); //a=97
    scanf("%c",&lower);

    printf("The uppercase letter is %c",lower-32); //A=65 (the difference is 97-65=32)


}
