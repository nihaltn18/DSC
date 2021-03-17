#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* insert(struct node *head,int val)
{
    if(head==NULL)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->data=val;
        temp->next=NULL;
        return temp;
    }
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=head;
    return temp;
}
void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
void alternate(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {
        printf("%d\n",temp->data);
        temp=temp->next->next;
        }
        else
        break;
    }
}
int main()
{
    struct node *head=NULL;
    for (int i = 0; i < 11; i++)
    {
        head=insert(head,i);
    }
    display(head);
    alternate(head);
    printf("palak......😂😂😂");
}