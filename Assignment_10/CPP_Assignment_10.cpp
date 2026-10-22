#include <iostream>
using namespace std;

template <class T>
class Calculator {
private:
    T a, b;

public:
    Calculator(T x, T y) {
        a = x;
        b = y;
    }

    T add() {
        return a + b;
    }

    T multiply() {
        return a * b;
    }
};

template <class T>
T findMaximum(T a, T b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    Calculator<int> c1(10, 20);

    cout << "Integer Addition: " << c1.add() << endl;
    cout << "Integer Multiplication: " << c1.multiply() << endl;

    Calculator<float> c2(2.5, 3.5);

    cout << "Float Addition: " << c2.add() << endl;
    cout << "Float Multiplication: " << c2.multiply() << endl;

    cout << "Maximum Integer: " << findMaximum(15, 25) << endl;
    cout << "Maximum Float: " << findMaximum(4.5, 2.5) << endl;

    return 0;
}
