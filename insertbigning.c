#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void traverselinkedlist(struct Node *ptr){
    while(ptr != NULL){
        printf("elements are :%d\n", ptr->data);
        ptr=ptr->next;
    }
}
struct Node * insertbigning(struct Node *head, int data){
    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));

    head->data= 12;
    head->next=first;

    first->data= 13;
    first->next=second;

    second->data= 14;
    second->next= NULL;

    traverselinkedlist(head);
    head = insertbigning(head,11);
    traverselinkedlist(head);
}