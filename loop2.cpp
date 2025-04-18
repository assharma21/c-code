#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i += 2)
    {
        sum += i;
    }
    cout << "sum of odd numbers from 1 to 100 is;" << sum << endl;
    return 0;
}
