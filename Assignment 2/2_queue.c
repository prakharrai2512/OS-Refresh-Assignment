#include <stdio.h>
#include<stdlib.h>

struct node{
    char *name;
    int rno;
    int year;
    char *branch;
    struct node *next;
};

struct node* createNode(){
    struct node* temp; 
    temp = (struct node*)malloc(sizeof(struct node)); 
    temp->next = NULL;
    return temp;
}

struct node* addNode(struct node* head, char name[], int rno, int year, char branch[]){
    struct node *temp,*p;
    temp = (struct node*)malloc(sizeof(struct node)); 
    temp->next = NULL;
    temp->name = name; 
    temp->rno = rno; 
    temp->year = year; 
    temp->branch = branch; 
    if(head == NULL){
        head = temp;     
    }
    else{
        p  = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = temp;
    }
    return head;
}

struct node* popQueue(struct node* head){
    if(head!=NULL){
        return head->next;
    }
    else{
        return NULL;
    }
}
void printr(struct node* p){
    while(p != NULL){
        printf("%s ",p->name);
        printf("%d ",p->rno);
        printf("%d ",p->year);
        printf("%s ",p->branch);
        printf("\n");
        p = p->next;
    }
}


int main(){
    struct node* head;
    head = addNode(NULL,"Prakhar",2021099,2021,"CSE");
    head = addNode(head,"Rohan",2021029,2021,"ECE");
    head = addNode(head,"Mohit",2021044,2021,"CSAI");
    head = addNode(head,"Aryan",2021089,2021,"CSAM");

    struct node* p;
    p = head;
    while(p != NULL){
        printf("%s ",p->name);
        printf("%d ",p->rno);
        printf("%d ",p->year);
        printf("%s ",p->branch);
        printf("\n");
        p = p->next;
    }
    printf("To add another student to queue input the values for name rollno, year and branch in-order in new lines\n");
    char nm[50],brh[50];
    scanf(" %s",nm);
    int rno1,ryr1;
    scanf("%d",&rno1);
    scanf("%d",&ryr1);
    scanf("%s",brh);
    head = addNode(head,nm,ryr1,rno1,brh);
    printf("Added, new list is \n");
    p = head;
    while(p != NULL){
        printf("%s ",p->name);
        printf("%d ",p->rno);
        printf("%d ",p->year);
        printf("%s ",p->branch);
        printf("\n");
        p = p->next;
    }
    int n;
    printf("Input n to pop queue n times");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        head = popQueue(head);
    }
    p = head;
    while(p != NULL){
        printf("%s ",p->name);
        printf("%d ",p->rno);
        printf("%d ",p->year);
        printf("%s ",p->branch);
        printf("\n");
        p = p->next;
    }

}