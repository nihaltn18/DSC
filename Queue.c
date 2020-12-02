#include<stdio.h>
struct node {
    int n;
    struct node* next;
};
struct node *first, *n1;
void nq(int k)
{
    struct node* n2;
    n2=(struct node*)malloc(sizeof(struct node));
    n2->next=NULL;
    n1->n=k;
    n1->next=n2;
    n1=n2;
}
display()
{
    struct node *temp=first;
    while(temp->next !=NULL)
    {
        printf ("%d\n",temp->n) ;
        temp=temp->next;
    }
}
dq()
{
    struct node* temp=first;
    first=first->next;
    free(temp) ;
}
int search (int k)
{
    struct node* temp=first;
    int j=1;
    while(1)
    {
        if(temp->n==k)
        {
            return j;
        }
        temp=temp->next;
        j++;
    }
    return -1;
}
int main()
{
    n1=(struct node*) malloc(sizeof(struct node));
    n1->next=NULL;
    first=n1;
    nq(1);
    nq(2) ;
    nq(4) ;
    nq(7) ;
    dq() ;
    int l=search (7) ;
    printf ("%d\n \n", l) ;
    display() ;
    return 0;
}
