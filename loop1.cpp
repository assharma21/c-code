#include <iostream>
using namespace std;
int main()
{
    /// for (int i = 4; i < 100; i = i + 4)
    // {
    //   cout << i << " ";
    //}
    //   cout << "Numbers divisible by 4 from 1 to 100:" << endl;
    // for (int i = 1; i <= 100; i++)
    // {
    //   if (i % 4 == 0)
    // {
    //   cout << i << " ";
    //}
    // }

    //    cout << endl;
    //  return 0;
    //}
    int sum = 0;
    for (int i = 0; i < 100; i++)
    {
        sum += i;
        sum = sum + 1;
    }
    cout << sum;
}
