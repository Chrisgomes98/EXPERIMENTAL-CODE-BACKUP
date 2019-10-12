#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int element;
    struct node *prev,*next;
}node;


node *create_list(int n)
{
    node *start,*p,*q;
    p=(node*)malloc(sizeof(node));

    start=(node*)malloc(sizeof(node));
    if(n==0)
    {
        return start;
    }
    else
    {
        printf("enter the element");
        scanf("%d",&start->element);
        start->next=NULL;
        start->prev=NULL;
        p=start;
        for(int i=1;i<n;i++)
        {
            q=(node*)malloc(sizeof(node));
            printf("enter the element");
            scanf("%d",&q->element);
            q->next=NULL;
            q->prev=NULL;
            p->next=q;
            q->prev=p;
            p=q;
        }

    }
    return start;
}

void print(node *start)
{
    printf("the elements are\n");
    node *p;
    p=start;
    while(p!=NULL)
    {
        printf("%d",p->element);

        printf("\n");
        p=p->next;
    }

}
node *insert_list(node **p,int i,node *t)
{
	int j;
	node *q,*x;
	if(i==0)
	{
		t->next=(*p);
		(*p)->prev=t;
		t->prev=NULL;
		*p=t;
		return *p;
	}
	q=*p;
	for(j=0;(j<i-1)&&(q->next!=NULL);j++)
	{

		q=q->next;
	}

	if((q->next==NULL)&&i>0)
	{

		q->next=t;
		t->prev=q;
		t->next=NULL;
		return *p;
	}
	x=q->next;
	q->next=t;
	t->prev=q;
	t->next=x;
	x->prev=t;
	return *p;
}



node *del(node *start,int n)
{
    printf("check del %d node\n",n);
    node *p;
    p=start;
    if(n==1)
    {
        start=start->next;
        start->prev=NULL;
    }
    else
    {

        for(int i=1;i<n;i++)
        {
            p=p->next;
        }
        if(p==NULL)
        {

        }
        else
        {
            printf("deleting node with element %d\n",p->element);
            node *q;
            q=(node*)malloc(sizeof(node));
            q=p;
            if((q->next)!=NULL)
            {
                (q->prev)->next=q->next;
                (q->next)->prev=q->prev;

            }
            else
            {
                printf("deleting last element\n");
                (q->prev)->next=NULL;


            }

        }
    }
    return start;

}

int main()
{
    int i;
    node *start,*t;
    start=create_list(5);
    print(start);
    start=del(start,1);
    print(start);
    start=del(start,2);
    print(start);
    start=del(start,3);
    print(start);
    printf("Enter the position to enter the node : ");
				scanf("%d",&i);
				t=(node*)malloc(sizeof(node));
				printf("Enter the element to insert : ");
				scanf("%d",&(t->element));
				start=insert_list(&start,i,t);

    print(start);

    return 0;
}
