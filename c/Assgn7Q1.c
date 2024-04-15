#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct treenode{
    int data;
    struct treenode* left;
    struct treenode* right;
}treenode;

int isEmpty(treenode *t)
{
    if(t==NULL)
    return 1;
    return 0;
}

treenode* insertNode(treenode* t, int val) {
    if (t == NULL)
    {
    struct treenode* tree;
    tree=(struct treenode*)malloc(sizeof(treenode));
    tree->data=val;
    tree->left=NULL;
    tree->right=NULL;
    return tree;
    }

    if (val < t->data)
        t->left = insertNode(t->left, val);
    else if (val > t->data)
        t->right = insertNode(t->right, val);

    return t;
}

int getCount(treenode *t)
{ 
    
    if(t==NULL)
    return 0;
    return 1 + getCount(t->left) + getCount(t->right);
    
}

int preorder(treenode *t)
{
    if(t!=NULL)
    {
    printf("%d ",t->data);
    preorder(t->left);
    preorder(t->right);
    return 1;
    }
   return 0;
}

int postorder(treenode *t)
{
    if(t!=NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf("%d ",t->data);
        return 1;
    }
   return 0;
}
int inorder(treenode *t)
{
    if(t!=NULL)
    {
        inorder(t->left);
        printf("%d ",t->data);
        inorder(t->right);
        return 1;
    }
    return 0;
}

int main()
{
    treenode* root=NULL;
    int m;
    int b;
    printf("enter the number of elements:");
    scanf("%d",&m);
   
    for(int i=0;i<m;i++)
    {    printf("enter the element:");
         scanf("%d",&b);
         root = insertNode(root,b);
    }
    printf("\nnode count: %d",getCount(root));
    
    printf("\npreorder:");
    preorder(root);
    
    printf("\npostorder:");
    postorder(root);
    
    printf("\ninorder:");
    inorder(root);
    

    return 0;
}