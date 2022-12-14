#include<stdio.h>

int main()
{

    int n;
    printf("Enter the total no of values\n");
    scanf("%d",&n);
    float x[n],y[n],a,b;
    printf("Enter the values of x\n");
    for(int i=0;i<n;i++)
    scanf("%f",&x[i]);
    printf("Enter the values of y\n");
    for(int i=0;i<n;i++)
    scanf("%f",&y[i]);

    float xsum=0,ysum=0,xysum=0,x2sum=0;

    for(int i=0;i<n;i++)
    {
        xsum+=x[i];
        ysum+=y[i];
        xysum+=x[i]*y[i];
        x2sum+=x[i]*x[i];
    }
    a=(x2sum*ysum - xysum*xsum)/(n*x2sum - (xsum*xsum));
 
    b=(n*xysum - xsum*ysum)/(n*x2sum - (xsum*xsum));

    printf("%f %f\n",a,b);
    
    printf("y-%f + %fx",a,b);

}