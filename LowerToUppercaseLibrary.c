//the code will input a uppercase letter then it will output a lowercase letter by using library function toupper
#include<ctype.h>
int main()
{
    char upper,lower;
    printf("Enter a lowercase letter:");
    scanf("%c",&lower);

    upper=toupper(lower);
    printf("The lowercase letter is: %c",upper);
}
