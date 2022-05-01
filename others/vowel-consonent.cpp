#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "Enter any one Charecter : " << endl;
    cin >> a;

    if (a == 'a' | a == 'e' | a == 'i' | a == 'o' | a == 'u')
    {
        cout << a << " is Vowel." << endl;
    }
    else
    {
        cout << a << " is Consonent." << endl;
    }

    return 0;
}