#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};
class DoublyLinkedList {
private:
    Node* head;
public:
    DoublyLinkedList() {
        head = nullptr;
    }
    void insert(int val) {
        Node* p = new Node(val); 
        if (head == nullptr) {
            head = p;
        } else {
            Node* q = head; 
            while (q->next != nullptr) {
                q = q->next;
            }
            q->next = p;
            p->prev = q;
        }
    }
    void remove(int val) {
        Node *p,*q;
               q = head;
            if (q->data == val) {
                p = head;
                head=head->next;
                head->prev=nullptr;
                delete p;
                return;
                }
                while (q->next != NULL) {
            if (q->next->data == val) {
                p = q->next;
                q->next = p->next;
                p->next->prev=q;
                delete p;
                return;
            }
            q = q->next;
        }
        cout << "Value " << val << " not found in the list.\n";
    }
    void displayForward() {
        Node* q = head;
        cout << "Forward: ";
        while (q != nullptr) {
            cout << q->data << " <-> ";
            q = q->next;
        }
        cout << "NULL\n";
    }
    void displayBackward() {
        Node* q = head;
        if (q == nullptr) {
            cout << "Backward: NULL\n";
            return;
        }
        while (q->next != nullptr) {
            q = q->next;
        }

        cout << "Backward: ";
        while (q != nullptr) {
            cout << q->data << " <-> ";
            q = q->prev;
        }
        cout << "NULL\n";
    }
};
int main() {
    DoublyLinkedList list;

    list.insert(60);
    list.insert(50);
    list.insert(80);
    list.displayForward();  
    list.displayBackward();  

    list.remove(50);
    list.displayForward();  
    list.displayBackward(); 

    return 0;
}

// output:
[Running] cd "d:\akash\" && g++ doublelinklist.cpp -o doublelinklist && "d:\akash\"doublelinklist
Forward: 60 <-> 50 <-> 80 <-> NULL
Backward: 80 <-> 50 <-> 60 <-> NULL
Forward: 60 <-> 80 <-> NULL
Backward: 80 <-> 60 <-> NULL

