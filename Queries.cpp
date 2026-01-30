#include <iostream>
using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};


void insert_at_head(Node* &head, int v) {
    Node* newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}


void insert_at_tail(Node* &head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void delete_from_index(Node* &head, int index) {
    if (head == NULL) return;

    if (index == 0) {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        temp = temp->next;
        if (temp == NULL) return; 
    }

    if (temp->next == NULL) return; 

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}


void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;
    Node* head = NULL;

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            insert_at_head(head, V);
        } else if (X == 1) {
            insert_at_tail(head, V);
        } else if (X == 2) {
            delete_from_index(head, V);
        }
        
        print_list(head);
    }

    return 0;
}