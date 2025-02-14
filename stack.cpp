#include <iostream>

using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int top;
    int arr[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_SIZE - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int x = arr[top--];
        return x;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(130);
    s.push(230);
    s.push(330);
    s.push(2130);
    s.push(310);
    s.push(3210);
    s.push(32340);
    s.push(33210);
    s.push(320);
    s.push(28918);

    cout << s.pop() << " popped from stack\n";

    cout << "Top element is: " << s.peek() << endl;

    return 0;
}