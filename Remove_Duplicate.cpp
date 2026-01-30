#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

//  insert nodes 
void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

//remove duplicat
void remove_duplicates(Node* head) {
    if (head == NULL) return;

    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        
        while (temp->next != NULL) {
            if (temp->next->val == current->val) {
                Node* duplicate = temp->next;
                temp->next = temp->next->next;
                delete duplicate;
            } else {
                temp = temp->next;
            }
        }
        current = current->next;
    }
}

// Function to prin
void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    // Input values until -1
    while (cin >> val && val != -1) {
        insert_tail(head, tail, val);
    }

    remove_duplicates(head);
    print_list(head);

   
    return 0;
}