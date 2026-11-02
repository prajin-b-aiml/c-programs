
#include <iostream>
#include <string>
using namespace std;

class student {
    int rollNo;
    string name;

public:
    // Constructor
    student(int r, string n) {
        rollNo = r;
        name = n;
        cout << "student object created" << endl;
    }

    // Member function
    void display() {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~student() {
        cout << "student object destroyed" << endl;
    }
};

int main() {
    
    student S1(101, "Arun"); 
    
    S1.display();
    
    return 0;
}