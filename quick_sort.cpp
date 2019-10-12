#include <stdio.h>
int a[]={2,5,4,7,1,0};
int n=6;


void print()
{
    printf("printing\n");
    for(int i=0;i<n;i++)
        printf("%d\n",a[i]);

}

void swapp(int i,int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void quick(int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
    }

    while(i<j)
    {
        while(a[i]<=a[pivot]&&i<last)
            i++;

        while(a[j]>a[pivot])
            j--;

        if(i<j)
        {
            swapp(i,j);
        }
    }
    swapp(pivot,j);

    print();
    printf("\n");
    quick(first,j-1);
    quick(j+1,last);
}


int main()
{
    printf("first print\n");
    print();
    quick(0,5);
    return 0;
}
