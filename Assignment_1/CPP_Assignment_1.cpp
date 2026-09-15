#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:
    // Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Constructor called" << endl;
    }

    // User-defined function to take input
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    // User-defined function to display data
    void displayData()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
