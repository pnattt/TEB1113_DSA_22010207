/*
id: 22010207
name: puteri natasha
group: g3
lab: L3
*/

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string name;
    Node* next_pointer; // Pointer to the next Node
    Node* prev_pointer; // Pointer to the previous Node

    //initialize Node
    Node(string n) : name(n), next_pointer(nullptr), prev_pointer(nullptr) {}
};

class Linkedlist {
    Node* head; // Pointer to the head of the list
    Node* tail; // Pointer to the tail of the list

public:
    Linkedlist() : head(nullptr), tail(nullptr) {} //initialize head

    void insert_node(Node* node) {
        if (head == nullptr) {
            head = tail = node; // If list is empty, set head to the new node
        } else {
            // Append at the end
            tail->next_pointer = node;
            node->prev_pointer = tail;
            tail = node;
        }
    }

    void display_list() {
        Node* currNode = head;
        while (currNode != nullptr) {
            cout << currNode->name << " "; // Print the name of the current node
            currNode = currNode->next_pointer; // Move to the next node
        }
    }
    
    void display_list_reverse() {
        Node* currNode = tail;
        while (currNode != nullptr) {
            cout << currNode->name << " ";
            currNode = currNode->prev_pointer;
        }
        cout << endl;
    }
};

int main() {
    // Create nodes
    Node* node1 = new Node("Aiman");
    Node* node2 = new Node("Alisha");
    Node* node3 = new Node("Husin");

    Linkedlist std_names;

    std_names.insert_node(node1);
    std_names.insert_node(node2);
    std_names.insert_node(node3);

    cout << "Forward traversal: ";
    std_names.display_list(); // Display the list forward
    
    cout << endl;

    cout << "Reverse traversal: ";
    std_names.display_list_reverse(); // Display the list backward



    return 0;
}
