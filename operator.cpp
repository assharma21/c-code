#include <iostream>
using namespace std;

int main()
{
    cout << "hello,world" << endl;
    int a = 5, b = 3;

    a += b;
    cout << a << endl;

    a -= b;
    cout << a << endl;
    a /= b;
    cout << a << endl;
    a *= b;
    cout << a << endl;
    return 0;
}