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

    //initialize Node
    Node(string n) : name(n), next_pointer(nullptr) {}
};

class Linkedlist {
    Node* head; // Pointer to the head of the list

public:
    Linkedlist() : head(nullptr) {} //initialize head

    void insert_node(Node* node) {
        if (head == nullptr) {
            head = node; // If list is empty, set head to the new node
        } else {
            Node* currNode = head;
            while (currNode->next_pointer != nullptr) {
                currNode = currNode->next_pointer; // Traverse to the end of the list
            }
            currNode->next_pointer = node; // Link the new node
        }
    }

    void display_list() {
        Node* currNode = head;
        while (currNode != nullptr) {
            cout << currNode->name << " -> "; // Print the name of the current node
            currNode = currNode->next_pointer; // Move to the next node
        }
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

    std_names.display_list(); // Display the list


    return 0;
}
