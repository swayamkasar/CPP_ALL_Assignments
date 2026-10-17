#include <iostream>
using namespace std;

int main() {
    int count;

    cout << "Enter the number of students: ";
    cin >> count;

    if (count <= 0) {
        cout << "Invalid number of students." << endl;
        return 0;
    }

    int *scores = new int[count];
    int sum = 0;

    for (int i = 0; i < count; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> scores[i];
    }

    for (int i = 0; i < count; i++) {
        sum = sum + scores[i];
    }

    float avg = static_cast<float>(sum) / count;

    cout << "\nSum of marks = " << sum << endl;
    cout << "Average marks = " << avg << endl;

    delete[] scores;
    scores = nullptr;

    cout << "Memory deallocated successfully." << endl;

    return 0;
}
