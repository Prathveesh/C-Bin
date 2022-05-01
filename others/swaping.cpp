#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter 1st number : " << endl;
    cin >> a;
    cout << "Enter 2nd number : " << endl;
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "1st number = " << a << ", 2nd number = " << b << endl;
    return 0;
}