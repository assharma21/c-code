#include <iostream>
using namespace std;
int main()
{
    int n = 11;
    int a = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << " n is not a prime number" << endl;
            a = 1;
            break;
        }
    }
    if (a == 0)
    {
        cout << "n is prime number" << endl;
    }
}