#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr){
    while(ptr != NULL){
        printf("the element is: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node *deleteAtindex(struct Node *head, int index){
    struct Node *p=head;
    struct Node *q=head->next;
    for(int i=0; i<index-1; i++){
        p=p->next;
        q=q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    head->data=2;
    head->next=first;
    first->data=3;
    first->next=second;
    second->data=4;
    second->next=third;
    third->data=5;
    third->next=fourth;
    fourth->data=6;
    fourth->next =NULL;


    printf("Befor deletion elements\n");
    traverse(head);
    head=deleteAtindex(head,3);
    printf("After deletion elements\n");
    traverse(head);
}