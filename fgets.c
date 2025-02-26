#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];

    printf("Enter Your Name:");
    fgets(name,sizeof(name),stdin);

    printf("Hello ");

    puts(name);
}
