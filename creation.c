#include<stdio.h>
#include<stdlib.h>

struct creation{ 
    int data;
    struct creation *next;
};
void traverselinkedlist(struct creation *ptr){
    while(ptr != NULL){
        printf("Element is : %d\n", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct creation *head;
    struct creation *second;
    struct creation *third;
    struct creation *fourth;

    head=(struct creation *) malloc(sizeof(struct creation));
    second=(struct creation *) malloc(sizeof(struct creation));
    third=(struct creation *) malloc(sizeof(struct creation));
    fourth=(struct creation *) malloc(sizeof(struct creation));

    head->data = 15;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 25;
    third->next = fourth;

    fourth->data = 30;
    fourth->next = NULL;
    
    traverselinkedlist(head);
}
