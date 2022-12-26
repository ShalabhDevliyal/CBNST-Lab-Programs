#include<stdio.h>
#include<math.h>
float fun(float x)
{
    return  log(x);
}

void solve(float h,float *y,int n)
{
    float ans=y[0]+y[n];
    float sumo=0,sume=0;
    int j=1;
    while(j<n)
    {
        if(j%3==0)
            sume+=y[j];
        else
            sumo+=y[j];
        j++;
    }
    sumo*=3;
    sume*=2;
    ans=(ans+sume+sumo)*3*h/8;
    printf("ans= %0.5f",ans);
}

int main()
{
    float x0,xn;
    scanf("%f%f",&x0,&xn);
    
    float h;
    scanf("%f",&h);
    int n=ceil((xn-x0)/h);
    printf("n   =   %d\n",n);
    float y[n+1];
    printf("x            y\n");
    for(int i=0;i<=n;i++)
    {
        y[i]=fun(x0);
        printf("%0.5f      %0.5f\n",x0,y[i]);
        x0+=h;
    }

    solve(h,y,n);
}
