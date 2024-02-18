#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr){
    while(ptr != NULL){
        printf("your data is :%d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node *insertEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node * )malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr->data=data;
    while(p->next !=NULL){
        p= p->next;
    }
    p->next=ptr;
    ptr->next = NULL;
    return head;
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head= (struct Node *)malloc(sizeof(struct Node));
    first= (struct Node *)malloc(sizeof(struct Node));
    second= (struct Node *)malloc(sizeof(struct Node));

    head->data=12;
    head->next=first;

    first->data=13;
    first->next=second;

    second->data=14;
    second->next=NULL;

    head=insertEnd(head,15);
    traverse(head);
    return 0;
}