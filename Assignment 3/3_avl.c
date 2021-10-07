#include<stdio.h>
#include<stdlib.h>

struct bst_node
{
    int data;
    int height;
    struct bst_node *left,*right;
};

typedef struct bst_node node;

int height(node *head)
{
    if (head == NULL)
        return 0;
    return ((height(head->left)>height(head->right))?height(head->left):height(head->right))+1;
}


void rightRotate(node **y)
{
    node *a = (*y)->left;
    node *b = a->right;
    a->right = (*y);
    (a->right)->left = b;
    *y = a;  
    a->height = ((height(a->left)>height(a->right))?height(a->left):height(a->right))+1;
    (a->right)->height = ((height(a->left)>height(a->right))?height(a->left):height(a->right))+1;
}
 
void leftRotate(node  **y)
{   
    node *a = (*y)->right;
    node *b = a->left;
    a->left = (*y);
    (a->left)->right = b;
    *y = a; 
    a->height = ((height(a->left)>height(a->right))?height(a->left):height(a->right))+1;
    (a->left)->height = ((height(a->left)>height(a->right))?height(a->left):height(a->right))+1;
}

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
    (*head)->height = height(*head);
    int bal = height((*head)->left) - height((*head)->right);
    if (bal > 1 && val < (*head)->left->data){
        rightRotate(head);
    }
    if (bal < -1 && val > (*head)->right->data){
        leftRotate(head);
    }
    if (bal > 1 && val > (*head)->left->data){   
        leftRotate(&((**head).left));
        rightRotate(head);
    }
    if (bal < -1 && val < (*head)->right->data){
        rightRotate(&((*head)->right));
        leftRotate(head);
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


void preOrder(node *head)
{
    if(head != NULL)
    {
        printf("%d ", head->data);
        preOrder(head->left);
        preOrder(head->right);
    }
}

void main()
{
    node *root;
    node *tmp;
 

    root = NULL;
    insert(&root, 10);
    preOrder(root);
    printf("\n");
    insert(&root, 20);
    preOrder(root);
    printf("\n");
    insert(&root, 30);
    preOrder(root);
    printf("\n");
    insert(&root, 40);
    preOrder(root);
    printf("\n");
    insert(&root, 50);
    preOrder(root);
    printf("\n");
    insert(&root, 25);
    preOrder(root);
    printf("\n");


    int a;
    printf("10,20,30,40,50,25 were added by default, enter a number to add");
    scanf("%d",&a);
    insert(&root,a);
    preOrder(root);
    printf("\n");
    printf("Add, input number you want to search ");
    scanf("%d",&a);
    search(&root, a);
    return 0;
}

