#include <stdio.h>
#include <conio.h>
#include <math.h>

//Equation: 3*x - cos x - 1

double func(double x)
{
    return 3*x - cos(x) - 1;
}
int main()
{
    double a=0,b=0,x;
    printf("Enter the starting value and the ending value: ");
    scanf("%lf%lf",&a,&b);
    int i = 0;
    x = (a+b)/2;
    while(fabs(func(x))>0.00001)
    {
        x = (a+b)/2;
        if(func(x)>0 && func(b)>0 || func(x)<0 && func(b)<0)
        {
            b = x;
        }
        else if(func(x)>0 && func(a)>0 || func(x)<0 && func(a)<0)
        {
            a = x;
        }
        printf("Iteration %d answer f(%lf): %lf\n",++i,x,func(x));
    }
    printf("Final Answer : %lf",x);
    return 0;
}
