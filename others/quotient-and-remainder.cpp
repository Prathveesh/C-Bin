#include <iostream>
using namespace std;
int main()
{
    int num1, num2, quo, rem;
    cout << "Entwe any two numbers : " << endl;
    cin >> num1 >> num2;
    quo = num1 / num2;
    rem = num1 % num2;
    cout << "Quotient = " << quo << endl;
    cout << "Remainder = " << rem << endl;

    return 0;
}