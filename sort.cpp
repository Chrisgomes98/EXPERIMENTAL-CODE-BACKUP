#include <stdio.h>
int n=5;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void print(int a[])
{
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);
}

int main()
{
    int a[5]={4,6,0,19,2};

    printf("using bubble sort");
int i;
    for(i=0;i<n-1;i++)
    {

        for(int j=0;j<n-i;j++)
            if(a[j]<a[j+1])
            swap(&a[j],&a[j+1]);

}
print(a);
}

