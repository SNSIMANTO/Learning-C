//the program will take a octal number and output a decimal number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter an Octal number:");
    scanf("%o",&num);

    printf("The decimal number is %d",num);
    getch();
}
