#include <stdio.h>

int swap(int *a,int *b);
int main()
{

    int a,b;
    printf("enter 2 nos\n");

    scanf("%d   %d",&a,&b);


    swap(&a,&b);

    printf("%d     %d   ",a,b   );
}

int swap(int *a,int *b)
{

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
