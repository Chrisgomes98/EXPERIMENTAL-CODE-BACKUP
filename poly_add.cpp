#include <stdio.h>

void print(int co[],int pow[])
{
    int n=int(sizeof(co))-1;
    for(int i=0;i<n;i++)
    {
        if(i!=n)
            printf("%dx^%d +",co[i],pow[i]);
        else
            printf("%dx^%d=0",co[i],pow[i]);
    }

    printf("\n");

}

void add(int co1[],int pow1[],int co2[],int pow2[])
{
    int co[30];
    int pow[30];
    int n1=int(sizeof(co1))-1;
    int n2=int(sizeof(co2))-1;
    int c=0;
    int flag=-1;
    for(int i=0;i<n1;i++)
    {
        co[i]=co1[i];
        pow[i]=pow1[i];
        c++;
    }
    for(int i=0;i<n2;i++)
    {
        int check=pow2[i];
        for(int j=0;j<=c;j++)
        {
            if(check==pow[j])
                flag=j;
        }
        if(flag==-1)
        {
            pow[c+1]=pow2[i];
            co[c++]=co2[i];
        }else{
        co[flag]=co[flag]+co2[i];
        }



    }
    printf("printing the sum\n");
    print(co,pow);
}
int main()
{
    int co1[]={0,2,3,4};
    int pow1[]={1,2,3,4};
    int co2[]={1,2,3,4};
    int pow2[]={1,2,3,4};
    printf("the  polynomials entered are\n");
    print(co1,pow1);
    print(co2,pow2);
    add(co1,pow1,co2,pow2);
}
