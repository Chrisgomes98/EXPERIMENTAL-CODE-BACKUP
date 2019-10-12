#include <stdio.h>
#include <stdlib.h>

typedef struct  node
{
    node *next;
    int data;
}node;

node* push(node *start)
{
    node *p,*q,*r;
    r=start;
    p=(node*)malloc(sizeof(node));
    p->next=NULL;
    printf("please enter the data \n");
    scanf("%d",p->data);

    if(r==NULL)
    {
        p->next=p;
        return p;
    }
    else
    {
        while(r->next!=start)
            r=r->next;
        r->next=p;
        p->next=start;
        return start;
    }

}


node* pop(node *start)
{
    if(start==NULL)
    {
        printf("the list is empty");
        return NULL;
    }
    else
    {
        node *r=start;
        node *p;
        p=start->next;

        while(r->next!=start)
            r=r->next;

        r->next=p;
        return p;
    }
}



void print(node* start)
{
    if(start==NULL)
        printf("the list is empty");
    else
    {
        node *r;
        r=start;
        while(r->next!=start)
        {
            printf("%d\n",r->data);
            r=r->next;
        }
    }
}


