
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    node *next;
    int element;
}node;



node *create_list(int n)
{
    node *start,*q,*p;
    start=(node*)malloc(sizeof(node));
    if(n<=0)
        return start;
    else
    {
        printf("please enter the elements\n");
        scanf("%d",&start->element);
        start->next=start;
        p=start;
        for(int i=1;i<n;i++)
        {
            q=(node*)malloc(sizeof(node));
            scanf("%d",&q->element);
            p->next=q;
            p=q;
            p->next=start;
        }
    }
    return start;

}


node print(node *start)
{
    printf("the elements are \n");
    printf("%d\n",start->element);
    int k=start->element;
    node *p=start->next;
    while(p->element!=k && p!=start)
    {
        printf("%d\n",p->element);
        p=p->next;
    }

}


node *insert_node(node *start,int pos)
{
    node *q=(node*)malloc(sizeof(node));
    printf("please enter the element you want to enter in %d\n",pos);
    scanf("%d",&q->element);
    if(pos==1)
    {
        int k=start->element;
        node *p=start->next;
        while(p->element!=k && (p->next)!=start)
        {
            p=p->next;
        }
        p->next=q;
        q->next=start;
        return q;
     }
     else
     {
         node *p=start;
         for(int i=1;i<pos-1;i++)
         {
             p=p->next;
         }
         q->next=(p->next);
         p->next=q;

         return start;


     }

}

node *delet_node(node *start,int n)
{
    node *p;
    p=start;
    node *q;
    p=p->next;
    int i=1;
    while(p!=start)
    {
        p=p->next;
        i++;
    }
    p=start;
    if(n%i==1)
        n=1;
    if(n==1)
    {
        while(p->next!=start)
            p=p->next;

        q=(start->next);
        p->next=q;

        return q;
    }
    else
    {
        for(int i=1;i<n-1;i++)
            p=p->next;

        p->next=(p->next)->next;
        return start;


    }

}

int main()
{
    node *start=create_list(5);
    print(start);
    start=insert_node(start,1);
    print(start);
    start=insert_node(start,7);
    print(start);
    start=delet_node(start,9);
    print(start);
    start=delet_node(start,1);
    print(start);




    return 0;
}
