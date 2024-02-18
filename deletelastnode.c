#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Toprintlist(struct Node *ptr){
    while(ptr != NULL){
        printf("the elemet is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node *deleteAtlast(struct Node  *head){
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next != NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    head->data=8;
    head->next=first;
    first->data=9;
    first->next=second;
    second->data=10;
    second->next=NULL;
    printf("Befor deletion elements\n");
    Toprintlist(head);
    head=deleteAtlast(head);    
    printf("After deletion elements\n");
    Toprintlist(head);
}