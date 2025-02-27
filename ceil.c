//this program will take a value and it will give a ceil value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value for having its ceil value :");
     scanf("%lf",&x);

     result=ceil(x);
     printf("The answer is %lf",result);
}

