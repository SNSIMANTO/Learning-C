//we will input a uppercase letter and it will output an lowercase letter by using a library function.
#include<ctype.h>
int main()
{
    char lower,upper;
    printf("Enter a uppercase letter:");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("The lowercase letter is:%c",lower);
}
