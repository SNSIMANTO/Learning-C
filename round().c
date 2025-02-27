//this program will take a value and it will give a round value of it
#include<stdio.h>
#include<math.h>
int main()
{
     double x,result;
     printf("Enter a value :");
     scanf("%lf",&x);

     result=round(x);  //if the value of x is 4.5 it will output the value 5
     printf("The answer is %lf",result);
}

