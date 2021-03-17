#include<stdio.h>
#include<stdlib.h>
struct node
{
    int val;
    struct node *right,*left;
};
struct node* insert(struct node *head,int key)
{
    if(head==NULL)
    {
        struct node *temp=(struct node*)malloc(sizeof(struct node));
        temp->val=key;
        temp->right=temp->left=NULL;
        return temp;
    }
    if(head->val>key)
    head->left=insert(head->left,key);
    else if(head->val<key)
    head->right=insert(head->right,key);
    return head;
}
void inorder(struct node *head)
{
    if(head==NULL)
    return;
    inorder(head->left);
    printf("%d\n",head->val);
    inorder(head->right);
}
int count(struct node *head)
{
    static int count_=0;
    if(head==NULL)
    return 0;
    count(head->left);
    if((head->left==NULL||head->right==NULL)&&(!(head->left==NULL&&head->right==NULL)))
    {
        count_++;
    }
    count(head->right);
    return count_;
}
int min(struct node *root)
{
    struct node *temp=root;
    while(temp->left!=NULL)
    temp=temp->left;
    return temp->val;
}
int max(int a,int b)
{
    if(a>=b)
    return a;
    return b;
}
int height(struct node *root)
{
    if(root==NULL)
    return 0;
    return max(height(root->right),height(root->left))+1;
}
int main()
{
    struct node *root=NULL;
    for (int i = 6; i < 11; i++)
    {
        root=insert(root,i);
    }
    inorder(root);
    printf("number of roots with exactly one child is %d\npalak.....😂😂😂😂😂😂😂\n",count(root));
    printf("minimum value in the tree is %d palak.....😂😂😂😂😂😂😂 \n",min(root));
    printf("height of the tree is %d palak.....😂😂😂😂😂😂😂 \n",height(root));
}