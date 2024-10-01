#include "stack.h"
#include <iostream>

using namespace std;


void printList(node* head) {
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

int main() {
 
    node* list1 = new node('h');
    list1->next = new node('e');
    list1->next->next = new node('l');
    list1->next->next->next = new node('l');
    list1->next->next->next->next = new node('o');


    node* list2 = new node('w');
    list2->next = new node('o');
    list2->next->next = new node('r');
    list2->next->next->next = new node('l');
    list2->next->next->next->next = new node('d');

   
    cout << "Concatenating lists..." << endl;
    node* concatenated = concatenate(list1, list2);
    cout << "Concatenated list: ";
    printList(concatenated); 

  
    cout << "\nComparing lists..." << endl;
    int comparisonResult = compareStrings(list1, list2);
    cout << "Comparison result: " << comparisonResult << endl;
    if (comparisonResult == 0) {
        cout << "The two strings are the same." << endl;
    }
    else if (comparisonResult == 1) {
        cout << "The first string is lexicographically greater." << endl;
    }
    else {
        cout << "The second string is lexicographically greater." << endl;
    }

   
    cout << "\nFinding intersection..." << endl;
    node* intersection = findIntersection(list1, list2);
    if (intersection != nullptr) {
        cout << "Intersection found: ";
        printList(intersection); 
    }
    else {
        cout << "No intersection found." << endl;
    }

    return 0;
}