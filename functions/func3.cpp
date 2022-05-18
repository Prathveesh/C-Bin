// Function Overloading

#include <iostream>
using namespace std;

int add(int x, int y) //....
{
    return x + y;
}

float add(float a, float b) //....
{
    return a + b;
}
int main()
{
    int a;
    float b;
    a = add(12, 5);
    b = add(15.2f, 4.3f);

    cout << a << endl
         << b << endl;

    return 0;
}