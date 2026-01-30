#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value; 
    Node* next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_node_tail(Node* &head, Node* &tail, int value)
{
    Node* newnode = new Node(value);

    if(head == NULL)
    {
        head = newnode;
        tail = newnode;   
        return;
    }

    tail->next = newnode;
    tail = newnode;       
}



int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int value; 
    while (true)
    {
        cin >> value;
        if(value == -1)
            break;

        insert_node_tail(head, tail, value);
    }
   if (head == NULL || head->next == NULL) {
        cout << 0;
        return 0;
    }
    ///////////////////////
    int maxVal = head->value;
    int minVal = head->value;

    Node* temp = head;
    while (temp != NULL) {
        maxVal = max(maxVal, temp->value);
        minVal = min(minVal, temp->value);
        temp = temp->next;
    }

    cout << maxVal - minVal;
    

    return 0;
}
