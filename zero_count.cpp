#include <stdio.h>


struct k
{
    int c2=0;
    int c5=0;
};

int count(int n,int r)
{
    int c=0;
    while(n>=r)
    {
        c++;
        n=n/r;
    }
    return c;
}

struct k num(int n)
{
    struct k a;
    a.c2=count(n,2);
    a.c5=count(n,5);
    return a;

}

void nos(int s)
{
    printf("the number of zeros at the end is %d",s);
}

void fact(int n)
{
    static int send=0,count2=0,count5=0;
    if(n>=0)
    {
        struct k b[1]=num(n);
        count2=count2+b[0].c2;
        count5=count5+b[0].c5;
        fact(n-1);
    }
    else
    {
        if(count2>count5)
            send=count5;
        else if(count5>count2)
            send=count2;
        else
            send=0;

        nos(send);
    }

}

int main(void)
{

    printf("please enter the number\n");
    int n;
    scanf("%d",&n);
    fact(n);
    return 0;
}
