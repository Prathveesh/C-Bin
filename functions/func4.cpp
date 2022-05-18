// Function template

#include <iostream>
using namespace std;

template <class T>

T Max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << Max(1, 2) << endl;
    cout << Max(2.3, 4.3) << endl;
    cout << Max(7.3f, 2.3f) << endl;
    return 0;
}