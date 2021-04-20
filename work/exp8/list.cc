#include <iostream>
#include "list.h"

List::List()
{
    list == NULL;
    list->next = list;
    list->pre = list;
    total = 0;
}

List::List(Item *newNode, int num)
{
    total = num;
    for (int i = 0; i < num; i++) {
        node *temp = new node;
        temp->value = newNode[i];
        if (i == 0) {
            list = temp;
            list->next = temp;
            list->pre = temp;
            temp = NULL;
            list = list->next;
            continue;
        }
        list->next->pre =temp;
        temp->next = list->next;
        temp->pre = list;
        list->next = temp;
        list = list->next;
        temp = NULL;        
    }
    
}
bool add(Item newNode);
bool isEmpty(){ return total == 0;}
bool isFull(){ return total == MAX;}
void visit(void (*pf)(Item &));
~List();
