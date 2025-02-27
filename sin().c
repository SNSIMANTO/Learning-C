//this program will take a value and it will give a sin value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value for Theta :");
     scanf("%lf",&x);

     result=sin(x);
     printf("The answer is %lf",result);
}

