// DEFAULT ARGUEMENT FUNCTION

#include <iostream>
using namespace std;

int add(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    int c = add(1, 2);
    int d = add(1, 2, 3);
    cout << c << " And " << d << endl;

    return 0;
}