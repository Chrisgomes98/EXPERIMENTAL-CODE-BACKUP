#include <stdio.h>

int a[100];

int count(int n,int k)
{
    int s=0;
    if(k<=1)
        return 1;
    else
    {
        for(int i=0;i<n;i++){
            if(k>=a[i])
            s=s+count(n,(k-a[i]));
        }
        return s;
        //return count(n,(k-a[0]))+count(n,(k-a[1]))+count(n,(k-a[2]));
    }
}

int main()
{

    int n,k;
    printf("enter the number of different steps allowed \n");
    scanf("%d",&n);
    printf("enter the ways \n");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("enter the  number of steps in  the stares \n");
    scanf("%d",&k);
    k=count(n,k);
    printf("%d",k);
    return 0;
}

