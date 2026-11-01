#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    string str1 = "Hello C++";
    string str2;

    cout << "Before move:" << endl;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    str2 = move(str1);

    cout << "\nAfter move:" << endl;
    cout << "str1 = " << str1 << endl;
    cout << "str2 = " << str2 << endl;

    return 0;
}

