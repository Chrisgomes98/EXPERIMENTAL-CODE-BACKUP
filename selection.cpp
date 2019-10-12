#include <stdio.h>

int main()
{
    int a[5]={9,5,8,6,7};
    int min;
    int j;
    for(int i=0;i<5;i++)
    {
        min=0;
        for(j=i+1;j<5;j++)
            if(a[min]>a[j])
            min=j;

        int d,b,c;
        b=a[min];
        c=a[j];
        a[min]=c;
        a[j]=b;
    }

    for(int i=0;i<5;i++)
        printf("%d\n",a[i]);
}
