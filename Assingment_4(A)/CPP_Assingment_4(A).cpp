#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Enter the score: ";
    cin >> score;

    cout << "Original score = " << score << endl;

    int *ptr = &score;

    cout << "Memory address of score = " << &score << endl;
    cout << "Pointer stores address = " << ptr << endl;

    *ptr = 90;

    cout << "Score after pointer modification = " << score << endl;

    int &alias = score;
    alias = 95;

    cout << "Score after reference modification = " << score << endl;

    return 0;
}
