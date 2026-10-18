#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int marks;
    static int count;

public:
    Student(int rollNo, int marks) {
        this->rollNo = rollNo;
        this->marks = marks;
        count++;
    }

    inline void display() {
        cout << "Roll Number: " << this->rollNo << endl;
        cout << "Marks: " << this->marks << endl;
    }

    static void showCount() {
        cout << "Total Students: " << count << endl;
    }

    friend class Teacher;
};

int Student::count = 0;

class Teacher {
public:
    void showMarks(Student s) {
        cout << "Teacher Accessing Student Details" << endl;
        cout << "Roll Number: " << s.rollNo << endl;
        cout << "Marks: " << s.marks << endl;
    }
};

int main() {
    Student s1(101, 85);
    Student s2(102, 92);

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    cout << endl;
    Student::showCount();

    cout << endl;
    Teacher t;
    t.showMarks(s1);

    return 0;
}

