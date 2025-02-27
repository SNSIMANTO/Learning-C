//this program will take a value and it will give a log10 value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value for log10 :");
     scanf("%lf",&x);

     result=log10(x);
     printf("The answer is %lf",result);
}
