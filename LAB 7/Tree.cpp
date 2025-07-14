/*
id: 22010207
name: puteri natasha
group: g3
lab: L7
*/

#include <iostream>
#include <string>
using namespace std;

// Node class representing each element in the tree
class Node {
public:
    string name;
    Node* leftbranch;
    Node* rightbranch;

    Node(string name) : name(name), leftbranch(nullptr), rightbranch(nullptr) {}
};

// Tree class to manage the binary tree structure
class Tree {
public:
    Node* root;

    Tree() : root(nullptr) {}

    // Adds the root node to the tree
    void addRoot(string name) {
        Node* newRoot = new Node(name);
        if (root == nullptr) {
            root = newRoot;
        } else {
            cout << "Root already exists" << endl;
        }
    }

    // Adds a left child to the given parent node
    void addLeft(Node* parent, string name) {
        if (parent->leftbranch == nullptr) {
            parent->leftbranch = new Node(name);
            cout << "Added left child: " << name << " to parent: " << parent->name << endl;
        } else {
            cout << "Left child already exists";
        }
    }

    // Adds a right child to the given parent node
    void addRight(Node* parent, string name) {
        if (parent->rightbranch == nullptr) {
            parent->rightbranch = new Node(name);
            cout << "Added right child: " << name << " to parent: " << parent->name << endl;
        } else {
            cout << "Right child already exiss";
        }
    }

    // Recursively searches for a node by name
    Node* findNode(Node* current, string name) {  //for easier search for particilar nodes by recursion
        if (current == nullptr) {
            return nullptr;
        }
        if (current->name == name) {
            return current;
        }
        Node* leftResult = findNode(current->leftbranch, name); 
        if (leftResult != nullptr) {
            return leftResult;
        }
        return findNode(current->rightbranch, name);
    }

    // Wrapper to add left child by searching parent by name
    void tree_add_left(string parentName, string childName) {
        Node* parent = findNode(root, parentName);
        if (parent != nullptr) {
            addLeft(parent, childName);
        } else {
            cout << "Parent node " << parentName << " not found." << endl;
        }
    }

    // Wrapper to add right child by searching parent by name
    void tree_add_right(string parentName, string childName) {
        Node* parent = findNode(root, parentName);
        if (parent != nullptr) {
            addRight(parent, childName);
        } else {
            cout << "Parent node " << parentName << " not found." << endl;
        }
    }
};

int main() {
    Tree tree;

    tree.addRoot("A");
    tree.tree_add_left("A", "B");
    tree.tree_add_right("A", "C");
    tree.tree_add_left("B", "D");
    tree.tree_add_right("B", "E");
    tree.tree_add_left("C", "F");
    tree.tree_add_right("C", "G");

    return 0;
}