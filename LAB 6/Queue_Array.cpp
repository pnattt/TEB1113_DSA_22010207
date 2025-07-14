/*
id: 22010207
name: puteri natasha
group: g3
lab: L5
*/

#include <iostream>
#include <string>
using namespace std;

class Queue {
public:
    string names[50];  
    int front = 0;     // Points to the front element of the queue
    int rear = -1;     // Points to the last element inserted
    int count = 0;     

    // Adds a new element to the rear of queue
    void enqueue(string value) {
        if (count == 50) {  // Queue is full
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1);           // Move rear pointer forward
        names[rear] = value;         // Insert value at new rear
        count++;                    
    }

    // Removes the front element from the queue
    void dequeue() {
        if (count == 0) {  // Queue is empty
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1);  
        count--;             
    }

    // Returns the front element without removing it
    string peek() {
        if (count == 0) return "nothing in queue";  
        return names[front]; 
    }

    // Displays all elements in the queue
    void display() {
        if (count == 0) {
            cout << "notning in queue" << endl;
            return;
        }
        for (int i = 0; i < count; i++) {
            int index = (front + i);  // Calculate the actual index
            cout << names[index];
            if (i < count - 1) cout << " -> ";
        }
        cout << " -> NULL" << endl;
    }
};

int main() {
    Queue q;

    // Enqueue some names
    q.enqueue("Aiman");
    q.enqueue("Alisha");
    q.enqueue("Husin");
    q.display(); 

    // Show the front element
    cout << "Peek: " << q.peek() << endl;  

    // Remove two elements
    q.dequeue();  
    q.display();  

    q.dequeue();  
    q.dequeue();  
    q.display(); 
}
