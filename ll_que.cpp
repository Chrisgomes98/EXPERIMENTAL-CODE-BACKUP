#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node *next;
}node;
node *start;
int n;

int is_empt()
{
    if(start->data==NULL|| start->next==NULL||start==NULL)
        return 1;
    else
        return 0;
}

int is_full()
{
    node *r;
    int c=0;
    while(r->next!=NULL)
    {
        r=r->next;
        c++;
    }
    if(c==n)
        return 1;
    else
        return  0;
}

void push()
{
    if(is_full())
        printf("the que is full");
    else
    {
        int k;
        node *p,*q,*r;
        printf("enter the element to be pushed into the stack");
        k=scanf("%d",&k);
        p=(node*)malloc(sizeof(node));
        p->next=NULL;
        p->data=k;
        if(is_empt())
            start=p;
        else
        {
            r=start;
            while(r->next!=NULL)
                r=r->next;

            r->next=p;
        }
    }

}


void pop()
{
    if(is_empt())
        printf("the que is empty\n");
    else
        start=start->next;
}

void peak()
{
    node *r;
    r=start;
    if(r==NULL)
        printf("the que is empty\n");
    while(r!=NULL)
    {
        printf("%d\n",r->data);
        r=r->next;
    }
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
