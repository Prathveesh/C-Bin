#include <iostream>
using namespace std;
int main()
{
    int num, a[100];

    cout << "Enter the num : " << endl;
    cin >> num;
    cout << "Enter elements of Array : " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    if (a[num - 1] % 10 == 0)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}