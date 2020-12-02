#include<stdlib.h>
#include<stdio.h>
struct node
{
    int n;
    struct node *right,*left;
};
struct node *root;
struct node *temp_head;
int insert_1(int k)
{
    
    if ((temp_head->n>k) && (temp_head->left!=NULL))
    {
        temp_head=temp_head->left;
        insert_1(k);
    }
    else if ((temp_head->n<=k)&&(temp_head->right!=NULL))
    {
        temp_head=temp_head->right;
        insert_1(k);
    }
}
void insert_2(int k)
{
    if(k>=temp_head->n)
    {
        struct node *delta;
        delta=(struct node*)malloc(sizeof(struct node));
        delta->left=NULL;
        delta->right=NULL;
        delta->n=k;
        temp_head->right=delta;
        printf("%d is inserted to the right of %d \n",k,temp_head->n);
    }
    else if(k<temp_head->n)
    {
        struct node *delta;
        delta=(struct node*)malloc(sizeof(struct node));
        delta->left=NULL;
        delta->right=NULL;
        delta->n=k;
        temp_head->left=delta;
        printf("%d is inserted to the left of %d \n",k,temp_head->n);
    }
}
void insert(int k)
{
    temp_head=root;
    insert_1(k);
    insert_2(k);
}
int search(int k)
{
    if(temp_head->n==k)
    {
        printf("%d is in the tree.....\n",k);
        return 0;
    }
    else if (k>temp_head->n && temp_head->right!=NULL)
    {
        temp_head=temp_head->right;
        search(k);
    }
    else if (k<temp_head->n && temp_head->left!=NULL)
    {
        temp_head=temp_head->left;
        search(k);
    }
    else
    {
        printf("%d is not in the tree....\n",k);
        return 0;
    }
}
void inorder(struct node *temp_head)
{
    if (temp_head==NULL)
    return;
    inorder(temp_head->left);
    printf("%d\n",temp_head->n);
    inorder(temp_head->right);
}
void postorder(struct node *temp_head)
{
    if (temp_head==NULL)
    return;
    postorder(temp_head->left);
    postorder(temp_head->right);
    printf("%d\n",temp_head->n);
}
void preorder(struct node *temp_head)
{
    if (temp_head==NULL)
    return;
    printf("%d\n",temp_head->n);
    preorder(temp_head->left);
    preorder(temp_head->right);
}
void delete_(int k)
{

}
int main()
{
    root=(struct node*)malloc(sizeof(struct node));
    root->left=NULL;
    root->right=NULL;
    printf("enter the data in the root\n");
    scanf("%d",&root->n);
    int o;
    while(1)
    {
        printf("to enter the elements into the tree enter 1\n");
        printf("to search for the element if it is there in the tree enter 2\n");
        printf("to display the elements in the tree in inorder format enter 3\n");
        printf("to display the elements in the tree in preorder format enter 4\n");
        printf("to display the elements in the tree in postorder format enter 5\n");
        printf("to delete the elements in the tree enter 6\n");
        scanf("%d",&o);
        if(o==1)
        {
          while(1)
            {
                printf("enter the data that you want to insert\n");
                int a;
                scanf("%d",&a);
                if(a==-1)
                break;
                else
                insert(a);
            }
        }
        if(o==2)
        {
            printf("enter the element that you want to search for \n");
            int e;
            scanf("%d",&e);
            temp_head=root;
            search(e);
        }
        if(o==3)
        {
            temp_head=root;
            inorder(temp_head);
        }
         if(o==4)
        {
            temp_head=root;
            preorder(temp_head);
        }
         if(o==5)
        {
            temp_head=root;
            postorder(temp_head);
        }
        if(o==6)
        {
            temp_head=root;
            printf("enter the element that you want to delete\n");
            int e;
            scanf("%d",&e);
            delete_(e);
        }

        else
        {
            printf("invalid input........\nenter a valid input\n");
        }
    } 
}
