//this program will take a value and it will give a log value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value for log :");
     scanf("%lf",&x);

     result=log(x);
     printf("The answer is %lf",result);
}
