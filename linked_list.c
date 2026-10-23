#include"linked_list.h"
ListNode* createNode(int value){
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    if (newNode == NULL){
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAtHead(ListNode** head,int value){
    ListNode* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}
void printList(ListNode *head){
    ListNode*temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void freeList(ListNode** head){
    ListNode* current = *head;
    while(current != NULL){
        ListNode* next = current->next;
        free(current);
    }
    *head = NULL;
}