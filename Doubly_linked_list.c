#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *prev, *next;
};
struct node *head, *current;
void insert(int k)
{
    struct node *temp=(struct node*) malloc(sizeof(struct node)) ;
    temp->next==NULL;
    temp->prev=NULL;
    temp->prev=current;
    current->next=temp;
    current->n=k;
    current=temp;
}
void insert_after_circular(int k) 
{
struct node *temp=(struct node*) malloc(sizeof(struct node)) ;
    temp->next==NULL;
    temp->prev=NULL;
    temp->prev=current;
    temp->next=head;
    head->prev=temp;
    current->next=temp;
    current->n=k;
    current=temp;
}
void display()
{
    struct node *temp=head;
   printf("%d\n",temp->n) ;
    temp=temp->next;
    while(temp->next !=NULL && temp != head)
    {
        printf("%d\n",temp->n) ;
        temp=temp->next;
    }
}
void reverse() 
{
    struct node *temp=current->prev;
    while(temp !=NULL)
    {
        printf("%d\n", temp->n) ;
        temp=temp->prev;
    }
}
void make_circular() 
{
current->next=head;
head->prev=current;
printf("doubly linked list is made circular") ;
}
int main()
{
    head=(struct node*) malloc(sizeof(struct node)) ;
    current=head;
    head->next=NULL;
    current->prev=NULL;
    int i;
    while (1)
    {
        printf("enter the element that tou want to insert\n") ;
        scanf("%d",&i) ;
        if(i==-1)
        {
            break;
        }
        else
        {
            insert(i) ;
        }

    }
    display() ;
    reverse() ;
    make_circular() ;
    display() ;
}
