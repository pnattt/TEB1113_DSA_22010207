/*
id: 22010207
name: puteri natasha
group: g3
lab: L5
*/

#include <iostream>
#include <string>
using namespace std;

// Node class for each stack element
class Node {
public:
    string data;
    Node* next;
    Node(string val) : data(val), next(nullptr) {}
};

// Stack class using linked list
class Stack {
public:
    Node* top;
    Stack() : top(nullptr) {}

    // Pushes a new element onto the stack
    void push(string value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        cout << "Pushed: " << value << endl;
    }

    // Displays all elements in the stack
    void display() {
        Node* current = top;
        if (current == nullptr) {
            cout << "Stack empty" << endl;
            return;
        }
        cout << "Stack contains: ";
        while (current != nullptr) {
            cout << current->data << "-> ";
            current = current->next;
        }
        cout << "NULL" << endl;
        
    }

    // Removes the top element from the stack
    void pop() {
        if (top == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        cout << "Popped: " << temp->data << endl;
        delete temp; 
    }

   // Returns the value at the top of the stack
    string peek() {
        if (top == nullptr) {
            return "empty stack";
        }
        return top->data;
    }

    // Checks if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack s;

    s.push("Aiman");
    s.push("Alisha");
    s.push("Husin");

    s.display();

    cout << "Top: " << s.peek() << endl;

    s.pop();
    s.display();
    s.pop();
    s.pop();
    s.display(); 
    s.pop(); // Attempt to pop from an empty stack

    return 0;
}
