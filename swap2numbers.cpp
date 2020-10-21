#include <iostream>
using namespace std;

int main()
{
    int a = 20, b = 50, temp;

    cout << "Before Swap" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "\nAfter Swap." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}