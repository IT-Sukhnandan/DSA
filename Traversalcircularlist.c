#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traverse(struct Node *head){
    struct Node *ptr=head;
    do{
        printf("Element is: %d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr !=head);
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;
    head=(struct Node *)malloc(sizeof(struct Node));
    first =(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    head->data=5;
    head->next=first;
    first->data=6;
    first->next=second;
    second->data=7;
    second->next=third;
    third->data=8;
    third->next=head;
    
    traverse(head);
}