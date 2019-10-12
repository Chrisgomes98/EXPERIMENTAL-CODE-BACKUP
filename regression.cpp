#include <stdio.h>
int n;
int sum(int a[])
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];

    }
    return s;
}

float mean(int a[])
{
    return sum(a)/n;
}
int main()
{
    int k;
    printf("please enter the number of elements \n");
    scanf("%d",&k);
    n=k;
    int x[k],y[k],x2[k],y2[k],xy[k];
    for(int i=0;i<n;i++)
    {
    printf("enter the co ordinate of x %d \n",i+1);
    scanf("%d",&x[i]);
    printf("enter the co ordinate of y %d \n",i+1);
    scanf("%f",&y[i]);
    }

    for(int i=0;i<n;i++)
    {
        xy[i]=x[i]*y[i];
        x2[i]=x[i]*x[i];
    }

    float m=(mean(x)*mean(y)-mean(xy))/(mean(x)*mean(x)-mean(x2));
    float b=mean(y)-m*mean(x);


    printf("the line is");
    printf("y= %fx + %f",m,b);
    return 0;
}
