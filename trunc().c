//this program will take a value and it will give a log10 value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a float value :");
     scanf("%lf",&x);

     result=trunc(x); //trunc function will remove the denery number for any output
     printf("The answer is %lf",result);
}
