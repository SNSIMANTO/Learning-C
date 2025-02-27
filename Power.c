#include<stdio.h>
#include<math.h>
int main()
{
    double base,power,result;
    printf("Enter base and power:");
    scanf("%lf %lf",&base,&power);

    result=pow(base,power);
    printf("The result is %.2lf",result);

    getch()
}
