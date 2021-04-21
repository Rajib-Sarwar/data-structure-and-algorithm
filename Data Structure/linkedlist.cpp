//
//  main.cpp
//  LinkedList
//
//  Created by Chowdhury Md Rajib  Sarwar on 20/4/21.
//

#include <iostream>

using namespace std;
 
class Node {
public:
    int data;
    Node *next;
    
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};


class LinkedList {
private:
    Node *header;
    Node *tail;
    int size;
    
public:
    LinkedList() {
        header = NULL;
        tail = NULL;
        size = 0;
    }
    
    int getSize() {
        return size;
    }
    
    void append(int data) {
        Node *n = new Node(data);
        
        if (header == NULL) {
            header = n;
            tail = n;
        }
        else {
            tail->next = n;
            tail = n;
        }
        
        size++;
    }
    
    void prepend(int data) {
        Node *n = new Node(data);
        
        if (header == NULL) {
            header = n;
            tail = n;
        }
        else {
            Node *temp = header;
            header = n;
            n->next = temp;
        }
        
        size++;
    }
    
    void printList() {
        Node *temp = header;
        
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        
        cout << endl;
    }
};

int main()
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.printList();
    return 0;
}
