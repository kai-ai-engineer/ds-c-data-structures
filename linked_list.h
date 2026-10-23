#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include<stdio.h>
#include<stdlib.h>

//定义节点结构体
typedef struct ListNode{
    int data;
    struct ListNode* next;
}ListNode;

//声明函数
ListNode* createNode(int value);
void insertAtHead(ListNode** head,int value);
void printList(ListNode* head);
void freeList(ListNode** head);

#endif //结束头文件