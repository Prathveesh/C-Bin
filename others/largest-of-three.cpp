#include <iostream>
using namespace std;
int main()
{
    int a, b, c, large;
    cout << "Enter any three Integers : " << endl;
    cin >> a >> b >> c;

    if (a >= b & a >= c)
    {
        large = a;
    }
    else if (b > a & b > c)
    {
        large = b;
    }
    else
    {
        large = c;
    }

    cout << "Largest = " << large << endl;
    return 0;
}