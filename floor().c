//this program will take a value and it will give a floor value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value to get its floor value :");
     scanf("%lf",&x);

     result=floor(x);
     printf("The answer is %lf",result);
}

