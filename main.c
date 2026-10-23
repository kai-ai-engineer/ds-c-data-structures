#include "linked_list.h"

int main() {
    ListNode* head = NULL; // Initialize empty list

    printf("--- 1. Insert 10, 20 ---\n");
    insertAtHead(&head, 10); 
    insertAtHead(&head, 20); 
    
    printf("--- 2. Print List ---\n");
    printList(head); 

    printf("--- 3. Free Memory ---\n");
    freeList(&head);
    
    printf("--- 4. Print List After Free ---\n");
    printList(head); 

    return 0;
}