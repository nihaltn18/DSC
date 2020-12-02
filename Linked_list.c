#include <stdio.h>
#include <stdlib.h>
struct node
{
    int n;
    struct node *next;
};
struct node *n1, *first;
void read()
{
    while (1)
    {
        int n;
        printf("enter the value of the data in the node\n");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        else
        {
            struct node *n2;
            n2 = (struct node *)malloc(sizeof(struct node));
            n2->next = NULL;
            n1->n = n;
            n1->next = n2;
            n1 = n2;
        }
    }
}
void display()
{
    struct node *temp = first;
    while (temp->next != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
    }
}
void insert_before_position(int pos, int num)
{
    if (pos == 1)
    {
        struct node *delta;
        delta = (struct node *)malloc(sizeof(struct node));
        delta->n = num;
        delta->next = first;
        first = delta;
    }
    else
    {
        struct node *one, *two;
        int i = 2;
        one = first;
        two = one->next;
        while (pos != i)
        {
            i++;
            one = two;
            two = two->next;
        }
        struct node *delta;
        delta = (struct node *)malloc(sizeof(struct node));
        delta->n = num;
        one->next = delta;
        delta->next = two;
    }
}
void delete_before_position(int pos)
{
    struct node *one, *two;
    one = first;
    two = first->next;
    if (pos == 2)
    {
        first = first->next;
    }
    else
    {
        int j = 3;
        while (j != pos)
        {
            j++;
            one = two;
            two = two->next;
        }
        one->next = two->next;
    }
}
void insert_after_position(int pos, int num)
{
    struct node *one, *two;
    one = first;
    two = one->next;
    int i = 1;
    while (i != pos)
    {
        one = two;
        two = two->next;
        i++;
    }
    struct node *delta;
    delta = (struct node *)malloc(sizeof(struct node));
    delta->n = num;
    one->next = delta;
    delta->next = two;
}
void delete_after_position(int pos)
{
    int j = 1;
    struct node *temp = first;
    while (j != pos)
    {
        temp = temp->next;
        j++;
    }
    struct node *temp2 = temp->next;
    temp->next = temp2->next;
}
void insert_after_element(int element, int num)
{
    struct node *temp;
    temp = first;
    while (temp->next != NULL)
    {
        if (temp->n == element)
        {
            struct node *delta;
            delta = (struct node *)malloc(sizeof(struct node));
            delta->n = num;
            delta->next = temp->next;
            temp->next = delta;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
}
void delete_after_element(int element)
{
    struct node *temp;
    temp = first;
    while (temp->n != element)
    {
        temp = temp->next;
    }
    struct node *temp2 = temp->next;
    temp->next = temp2->next;
}
void insert_before_element(int element, int num)
{
    struct node *one, *two;
    one = first;
    two = first->next;
    if (one->n == element)
    {
        struct node *delta;
        delta = (struct node *)malloc(sizeof(struct node));
        delta->n = num;
        delta->next = first;
        first = delta;
    }
    else
    {
        while (two->n != element)
        {
            one = two;
            two = two->next;
        }
        struct node *delta;
        delta = (struct node *)malloc(sizeof(struct node));
        delta->n = num;
        one->next = delta;
        delta->next = two;
    }
}
void delete_before_element(int element)
{
    struct node *one, *two, *three;
    one = first;
    two = first->next;
    three = two->next;
    if (element == two->n)
    {
        first = first->next;
    }
    else
    {
        while (three->n != element)
        {
            one = two;
            two = three;
            three = three->next;
        }
        one->next = three;
        two = NULL;
    }
}
void reverse()
{
    struct node *one,*two,*three,*four;
    four=(struct node*)malloc(sizeof(struct node));
    four->next=NULL;
    one=first;
    two=first->next;
    three=two->next;
    one->next=four;
    while(three->next!=NULL)
    {
        two->next=one;
        one=two;
        two=three;
        three=three->next;
    }
    two->next=one;
    first=two;
}
int main()
{
    n1 = (struct node *)malloc(sizeof(struct node));
    n1->next = NULL;
    first = n1;
    while (1)
    {
        int z;
        printf("enter what you want to do\n");
        printf("to insert the element to linked list enter 1\n");
        printf("to display the linked list enter 2\n");
        printf("to insert the element after given position enter 3\n");
        printf("to delete the element after given position enter 4\n");
        printf("to insert the element before given position enter 5\n");
        printf("to delete the element before given position enter 6\n");
        printf("to insert the element after given element enter 7\n");
        printf("to delete the element after given element enter 8\n");
        printf("to insert the element before the given element enter 9\n");
        printf("to delete the element before given element enter 10\n");
        printf("to reverse the linked list enter 11\n");
        printf("to exit enter 12\n");
        scanf("%d", &z);
        if (z == 1)
        {
            read();
        }
        else if (z == 2)
        {
            display();
        }
        else if (z == 3)
        {
            int u, v;
            printf("enter the position after which you want to insert the new element\n");
            scanf("%d", &u);
            printf("enter the new element\n");
            scanf("%d", &v);
            insert_after_position(u, v);
        }
        else if (z == 4)
        {
            int o;
            printf("enter the position after whose element needs to be deleted\n");
            scanf("%d", &o);
            delete_after_position(o);
        }
        else if (z == 5)
        {
            int u, v;
            printf("enter the position before which you want to insert the new element\n");
            scanf("%d", &u);
            printf("enter the new element\n");
            scanf("%d", &v);
            insert_before_position(u, v);
        }
        else if (z == 6)
        {
            int o;
            printf("enter the position before whose element needs to be deleted\n");
            scanf("%d", &o);
            delete_before_position(o);
        }
        else if (z == 7)
        {
            int u, v;
            printf("enter the element after which you want to insert the element\n");
            scanf("%d", &u);
            printf("enter the new element \n");
            scanf("%d", &v);
            insert_after_element(u, v);
        }
        else if (z == 8)
        {
            printf("enter the element after which you want tot delete the element \n");
            int o;
            scanf("%d", &o);
            delete_after_element(o);
        }
        else if (z == 9)
        {
            int u, v;
            printf("enter the element before which you want to insert the element\n");
            scanf("%d", &u);
            printf("enter the new element \n");
            scanf("%d", &v);
            insert_before_element(u, v);
        }
        else if (z == 10)
        {
            printf("enter the element before which you want tot delete the element \n");
            int o;
            scanf("%d", &o);
            delete_before_element(o);
        }
        else if (z == 11)
        {
            reverse();
        }
        else if (z==12)
        {
            break;
        }
        else
        {
            printf("invalid input please try again\n");
        }
    }
}
