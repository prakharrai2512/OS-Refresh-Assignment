#include<stdio.h>
#include<stdlib.h>

struct bst_node
{
    int data;
    int height;
    struct bst_node *left,*right;
};

typedef struct bst_node node;


void insert(node **head, int val)
{
    node *temp = NULL;
    if((*head)== NULL)
    {
        temp = (node *)malloc(sizeof(node));
        temp->data = val;
        temp->left = NULL;
        temp->right = NULL;
        *head = temp;
        return;
    }
    else{
        if(val > (*head)->data)
        {
            insert(&(*head)->right, val);
        }
        else if(val < (*head)->data)
        {
            insert(&(*head)->left, val);
        }
    }
}


node* search(node ** head, int val)
{
    if((*head)== NULL)
    {
        return NULL;
    }
    printf("At %d \n",(*head)->data);
    if(val < (*head)->data)
    {
        search(&((*head)->left), val);
    }
    else if(val > (*head)->data)
    {
        
        search(&((*head)->right), val);
    }
    else if(val == (*head)->data)
    {
        return *head;
    }
}


void delNode(node **head,int val)
{   
    node *delN = search(head,val);
    delN = NULL;
}


void main()
{
    node *root;
    node *tmp;
 

    root = NULL;
    insert(&root, 42);
    insert(&root, 21);
    insert(&root, 101);
    insert(&root, 24);
    insert(&root, 9);
    insert(&root, 88);
    insert(&root, 121);


    int a;
    printf("42, 21, 101, 24, 9, 8, 121 were added by default, enter a number to add");
    scanf("%d",&a);
    insert(&root,a);
    printf("Added, input number you want to search ");
    scanf("%d",&a);
    search(&root, a);
    

}