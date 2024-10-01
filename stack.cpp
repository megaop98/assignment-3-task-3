#include "stack.h"


stack::stack() {
    head = nullptr;
}


node* concatenate(node* head1, node* head2) {
    if (head1 == NULL)
    {
        return head2;   
    }

    node* temp = head1;

  
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    
    temp->next = head2;
    return head1;
}

node* findIntersection(node* head1, node* head2) {
    node* dummy = new node('\0');
    node* tail = dummy;

    node* temp1 = head1;
    node* temp2 = head2;

    while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            tail->next = new node(temp1->data); 
            tail = tail->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->data < temp2->data) {
            temp1 = temp1->next;
        }
        else {
            temp2 = temp2->next;
        }
    }

    return dummy->next;
}


int compareStrings(node* head1, node* head2) {
    node* temp1 = head1;
    node* temp2 = head2;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data < temp2->data) {
            return -1;
        }
        if (temp1->data > temp2->data) {
            return 1;  
        }
      
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

   
    if (temp1 != nullptr) return 1;
    if (temp2 != nullptr) return -1;

    return 0; 
}