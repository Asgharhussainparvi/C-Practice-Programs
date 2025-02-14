#include <iostream>

using namespace std;

class Node {
public:
    int key;
    int data;
    Node* next;

    Node() {
        key = 0;
        data = 0;
        next = nullptr;
    }

    Node(int d, int k) {
        data = d;
        key = k;
        next = nullptr;
    }
};

int main() {
    Node node1(1, 10);
    Node node2(2, 20);
    Node node3(3, 30);

    // You can now use these objects as needed, e.g.,
    cout << node1.key << " " << node1.data << " >> ";
    cout << node2.key << " " << node2.data << " >> ";
    cout << node3.key << " " << node3.data << " >> ";

    return 0;
}