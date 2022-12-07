#include<stdio.h>
#include<math.h>

float fun(float x,float y)
{
    return (x-y)/2;
}

void order4(float y0,float x0,float h,float n)
{
    float yn;
    float k1,k2,k3,k4;

    for(int i=0;i<n;i++)
    {
        k1=h*fun(x0,y0);
        k2=h*fun(x0+h/2,y0+k1/2);
        k3=h*fun(x0+h/2,y0+k2/2);
        k4=h*fun(x0+h,y0+k3);
        printf("\nk1= %f\tk2= %f\tk3= %f\tk4= %f",k1,k2,k3,k4);
        yn=y0+(1/6.0)*(k1+2*k2+2*k3+k4);
        printf("\ny= %f",yn);
        y0=yn;
        x0+=h;
    }
}

int main()
{
    float y0,x0;
    scanf("%f%f",&x0,&y0);
    float h;
    scanf("%f",&h);
    float xn;
    scanf("%f",&xn);
    int n=ceil((xn-x0)/h);
    printf("y0= %f\tx0= %f\nh= %f\tn= %d\n",y0,x0,h,n);
    order4(y0,x0,h,n);
}