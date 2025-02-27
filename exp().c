//this program will take a value and it will give a exp value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value for exp :");
     scanf("%lf",&x);

     result=exp(x);
     printf("The answer is %lf",result);
}
