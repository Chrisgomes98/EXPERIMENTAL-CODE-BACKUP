#include <stdio.h>

int is_empt();
int is_full();
void push();
void pop();
void peak();

int a[10];
int n,f=-1,b=-1;

int is_empt()
{
    if(f==-1||b==-1)
        return 1;
    else
        return 0;
}

int is_full()
{
    if(b==n-1)
        return 1;
    else
        return 0;
}


void push()
{
    printf("pushing\n");
    if(is_full())
        printf("the que is full\n");
    else
    {
        int k;
        printf("enter the number\n");
        scanf("%d",&k);
        if(is_empt())
        {
            a[++f]=k;
            ++b;
        }
        else
        {
            a[++b]=k;
        }
    }
}


void pop()
{
    if(is_empt())
        printf("empty\n");
    else
    {
        printf("popping\n");
        int i;
        for(i=1;i<n;i++)
        {
            a[i-1]=a[i];
        }
        b--;


    }

}


void  peak()
{

    for(int i=f;i<=b;i++)
        printf("%d\n",a[i]);
}


int main()
{
    printf("enter  the  number of elements in the que\n");
    int n1;
    scanf("%d",&n1);
    n=n1;
    while(true)
    {
        int ch;
        printf("enter choice 1:push 2:pop 3:peak\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        default:
            printf("invalid input");
        }
    }
    return 0;
}
