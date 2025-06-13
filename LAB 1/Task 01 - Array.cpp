/*
ID: 22010207
NAME: PUTERI NATASHA BINTI HAIRUL NIZAM
group: g3
lab: L1
*/

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

struct student{
        int id;
        string name;
        int age;
        string email;
    };
    
int main()
{
    int size = ' ';
    cout << "How many students? ";
    cin >> size;
    student studentData[size];
    cout << "\nEnter Student Data:... \n";
    
    for(int i=0; i<size; i++){
        cout << "Enter Student ID for student " << i+1 << ": ";
        cin >> studentData[i].id;
        cout << "Enter Student name for student " << i+1 << ": ";
        cin >> studentData[i].name;
        cout << "Enter Student age for student " << i+1 << ": ";
        cin >> studentData[i].age;
        cout << "Enter Student email for student " << i+1 << ": ";
        cin >> studentData[i].email;
        cout << endl;
    }
    
    cout << "\nStudent Data:\n";
    cout << "-----------------------------------------\n";
    
    for(int i=0; i<size; i++){
        cout << "Student " << i+1 << ":\n";
        cout << "ID: " << studentData[i].id << endl;
        cout << "name: " << studentData[i].name << endl;
        cout << "age: " << studentData[i].age << endl;
        cout << "email: " << studentData[i].email << endl;
        cout << endl;
    }
    

    return 0;
}