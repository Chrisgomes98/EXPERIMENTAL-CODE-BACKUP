#include<stdio.h>
int N;
void print(int co[],int pow[])
{
    int n=N;
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(i!=n-1
           )
            printf("%dx^%d +",co[i],pow[i]);
        else
            printf("%dx^%d=0",co[i],pow[i]);
    }

    printf("\n");

}

int main()
{
int co[50];
int po[50];
int c=0;
int poly1[6][2],poly2[6][2],term1,term2,match,proceed,i,j;
printf("Enter the number of terms in first polynomial : ");
scanf("%d",&term1);
printf("Enter the number of terms in second polynomial : ");
scanf("%d",&term2);
printf("Enter the coeff and expo of the first polynomial:\n");
for(i=0;i<term1;i++)
{
scanf("%d %d",&poly1[i][0],&poly1[i][1]);
}
printf("Enter the coeff and expo of the second polynomial:\n");
for(i=0;i<term2;i++)
{
scanf("%d %d",&poly2[i][0],&poly2[i][1]);
}
printf("The resultant polynomial after addition :\n");
for(i=0;i<term1;i++)
{
match=0;
for(j=0;j<term2;j++)
{
if(match==0)
if(poly1[i][1]==poly2[j][1])
{
co[c]=(poly1[i][0]+poly2[j][0]);
po[c]=poly1[i][1];
c++;
//printf("%d %d\n",(poly1[i][0]+poly2[j][0]), poly1[i][1]);
match=1;
}
}
}
for(i=0;i<term1;i++)
{
proceed=1;
for(j=0;j<term2;j++)
{
if(proceed==1)
if(poly1[i][1]!=poly2[j][1])
proceed=1;
else
proceed=0;
}
if(proceed==1){
co[c]=(poly1[i][0]);
po[c]=poly1[i][1];
c++;
//printf("%d %d\n",poly1[i][0],poly1[i][1]);
}}
for(i=0;i<term2;i++)
{
proceed=1;
for(j=0;j<term1;j++)
{
if(proceed==1)
if(poly2[i][1]!=poly1[j][1])
proceed=1;
else
proceed=0;
}
if(proceed==1){
co[c]=(poly2[i][0]);
po[c]=poly2[i][1];
c++;
//printf("%d %d",poly2[i][0],poly2[i][1]);
}}
N=c;
print(co,po);
}
