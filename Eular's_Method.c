#include<stdio.h>
#include<math.h>

float fun(float x, float y)
{
    return x+y;
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

    float yn;    
    for(int i=0;i<n;i++)
    {
        yn=y0+h*fun(x0,y0);
        printf("\ny= %f",yn);
        y0=yn;
        x0+=h;
    }

}