#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Constructor called" << endl;
    }

    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;
    }

    void displayData()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

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
