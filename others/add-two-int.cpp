#include <iostream>
using namespace std;
int add(int x, int y);
int main()
{
    int a, b;
    cout << "Enter any two numbers that you want to Add : " << endl;
    cin >> a >> b;
    cout << "Sum of " << a << " and " << b << " = " << add(a, b) << endl;
    return 0;
}

int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}