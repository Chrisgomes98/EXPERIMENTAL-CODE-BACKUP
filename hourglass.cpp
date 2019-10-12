#include <stdio.h>
int a[6][6];
hourglass(int x,int y)
{
    int sum;
    sum=-(a[x][y+1]+a[x+2][y+1]);
    for(int i=x;i<x+3;i++)
    {
        for(int j=y;j<y+3;j++)
            sum=sum+a[i][j];
    }
    return sum;
}
int main()
{
    int i,j;
    int sum[6][6];
    printf("please enter the inputs");
    for(i=0;i<6-2;i++)
    {
        for(j=0;j<6-2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<6-2;i++)
    {
        for(j=0;j<6-2;j++)
        {
            sum[i][j]=hourglass(i,j);
        }
    }
    int max=sum[0][0],x,y;
    for(i=0;i<6-2;i++)
    {
        for(j=0;j<6-2;j++)
        {
            if(sum[i][j]>max)
            {
                x=i;
                y=j;
            }
        }
    }
    printf("%d   %d",x,y);
    return 0;
}
