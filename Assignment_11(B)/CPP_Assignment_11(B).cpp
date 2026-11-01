
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << "Vector elements: ";
    for (int x : v) {
        cout << x << " ";
    }

    v.pop_back();

    cout << "\nAfter deletion: ";
    for (int x : v) {
        cout << x << " ";
    }

    cout << "\nFirst element: " << v[0];
    cout << "\nSize of vector: " << v.size();

    return 0;
}

