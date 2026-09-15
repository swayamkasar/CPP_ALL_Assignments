#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number()
    {
        value = 0;
    }

    Number(int v)
    {
        value = v;
    }

    Number operator+(Number n)
    {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Number n1;
    Number n2(10);
    Number n3(20);

    n1.display();
    n2.display();
    n3.display();

    Number n4 = n2 + n3;

    cout << "After Addition:" << endl;
    n4.display();

    return 0;
}
