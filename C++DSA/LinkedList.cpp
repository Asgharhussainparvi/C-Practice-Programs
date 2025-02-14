#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = nullptr;

    Node* second = new Node();
    second->data = 2;
    second->next = nullptr;

    Node* third = new Node();
    third->data = 3;
    third->next = nullptr;

    head->next = second; // Linking first node to second
    second->next = third;

    // Printing the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}