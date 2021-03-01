#include <iostream>
using namespace std;

/* linked list implementation - Singley linkedlist */

//blueprint of the linked list
class Node {
    public:
        int data;
        Node* next;
};

//printing the linked list
void printList(Node* n) {
    while(n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
    cout << "\n";
}


//adding the node at the front of the linkedlist
//we are giving the reference to the pointer (that's why double star)
void addNodeAtStart(Node** head, int d) {
    //to insert a node, first make one
    //memory allocated to the heap to make a node
    Node* newNode = new Node();
    newNode->data = d;
    //make the link varaible points towards the current head
    newNode->next = *head;
    //make the current head points towards the new node
    *head = newNode;
}

//adding the node at the end of the linked list
void addNodeAtEnd(Node** head, int d) {
    //object created
    Node* newNode = new Node();
    newNode->data = d;
    newNode->next = NULL;

    //if the linkedlist is empty 
    if(*head == NULL) {
        //pointing the head towards the object
        *head = newNode;
    }
    //else, if the linkedlist is not empty
    else {
        //counter to find last node
        Node* last = *head;
        //traverse to the last node
        while(last->next != NULL) {
            last = last->next;
        }
        //after finding the last node
        last->next = newNode;
    }
}

//inserting the node at a given position
void addNodeAfter(Node* previousNode, int d) {
    //check if the node is null or not
    if(previousNode == NULL) {
        cout << "The Previous cannot be NULL" << "\n";
        return;
    }
    //if the previous node is not null then
    //create the new temp Node.
    Node* newNode = new Node();
    newNode->data = d;
    //pointing next of newNode towards where next of previousNode is pointing
    newNode->next = previousNode->next;
    //point the next of previousNode towards newNode
    previousNode->next = newNode; 
}

//deleting the node in the linked list
void deleteNode(Node** head, int key) {
    //create a reference
    Node* temp = *head;
    //previous node
    Node* prev = NULL;
    //if the key matches where the head is pointing
    if(temp != NULL && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }
    //if the head node does not have the key
    else {
        //search the key to be deleted
        while(temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
        //if the search was unsuccessful and we don't find the key
        if(temp == NULL) {
            return;
        }
        prev->next = temp->next;
        delete temp;
    }
}

int main() {

    // head is a pointer which always points towards the starting point of the linkedlist
    //initially head is pointing nowhere (list is empty)
    Node* head = NULL;
    addNodeAtStart(&head, 1);
    printList(head);
    addNodeAtStart(&head, 2);
    printList(head);
    addNodeAtStart(&head, 3);
    printList(head);
    addNodeAtEnd(&head, 4);
    printList(head);
    addNodeAfter(head->next, 8);
    printList(head);
    deleteNode(&head, 8);
    printList(head);
    return 0;
}