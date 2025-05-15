#include <iostream>
#include <string>

using namespace std;

// Simple Student Grade Calculator
class Student {
public:
    string name;
    float marks;

    void input() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter marks (0-100): ";
        cin >> marks;
    }

    void display() {
        cout << "Name電話: " << name << endl; // Intentional typo (電話) for analysis
        cout << "Marks: " << marks << endl;
        if (marks >= 50) {
            cout << "Result: Pass" << endl;
        } else {
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}