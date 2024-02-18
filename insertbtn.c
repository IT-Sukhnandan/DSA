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
struct Node * insertbetween(struct Node *head,int data, int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i != index - 1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}


int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head = (struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));

    head->data= 11;
    head->next=first;

    first->data= 12;
    first->next=second;

    second->data= 14;
    second->next= NULL;

    traverselinkedlist(head);
    head = insertbetween(head,13,2);
    traverselinkedlist(head);
}