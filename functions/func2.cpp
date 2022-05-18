// Also functions

#include <iostream>
using namespace std;

int maxim(int x, int y)
{
    int result;
    if (x > y)
        result = x;
    else
        result = y;

    return result;
}

int main()
{
    int a = 10, b = 15, r;
    r = maxim(a, b);
    cout << r << endl;

    return 0;
}