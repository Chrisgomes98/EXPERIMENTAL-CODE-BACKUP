#include <stdio.h>

int main()
{
    int a[5]={4,3,6,7,1};

    int i,j,max=0;
    int n=5;
    for(i=0;i<n-1;i++)
    {
        max=0;
        for(j=0;j<n-i;j++)
        {

            if(a[j]>a[max])
                max=j;
        }
        int temp=a[max];
        a[max]=a[n-i];
        a[n-i]=temp;
    }

    for(i=0;i<n;i++)
        printf("%d\n",a[i]);


    return 0;
}
