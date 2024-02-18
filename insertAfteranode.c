#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr){
    while(ptr != NULL){
        printf("your data is :%d\n", ptr->data);
        ptr=ptr->next;
    }
}

struct Node *insertAfteraNode(struct Node *head, struct Node *prenode, int data){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data= data;
    ptr->next=prenode->next;
    prenode->next=ptr;

    return head;
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head=(struct Node * )malloc(sizeof(struct Node));
    first=(struct Node * )malloc(sizeof(struct Node));
    second=(struct Node * )malloc(sizeof(struct Node));

    head->data=5;
    head->next=first;

    first->data=6;
    first->next=second;

    second->data= 7;
    second->next=NULL;

    head=insertAfteraNode(head,first,8);
    traverse(head);
}