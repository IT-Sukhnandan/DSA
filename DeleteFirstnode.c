#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
void traverse(struct Node *ptr){
    while(ptr != NULL){
        printf("After deleting your data is :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct Node *deletingFirst(struct Node *head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
int main(){
    struct Node *head;
    struct Node *first;
    struct Node *second;

    head=(struct Node *)malloc(sizeof(struct Node));
    first=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));

    head->data =4;
    head->next=first;

    first->data=5;
    first->next=second;

    second->data=6;
    second->next=NULL;

    printf("befor deletion elements\n");
    traverse(head);
     
    head=deletingFirst(head);
    printf("After deletion elements\n");
    traverse(head);

}