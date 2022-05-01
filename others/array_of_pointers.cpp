#include <iostream>
using namespace std;
int main()
{

    int *a, *b;
    int m, i;

    cout << "Enter Array size : " << endl;
    cin >> m;

    a = (int *)calloc(m, sizeof(int));
    b = a;
    cout << "Enter the ele of array : " << endl;
    for (i = 0; i < m; i++)
    {
        cin >> *a++;
    }
    a = b; // if not written gives junk values
           // 0xf77eb8 = 0   0xf77ebc = -1440748414   0xf77ec0 = 5414
    for (i = 0; i < m; i++)
    {
        cout << *a++ << "\t";
    }

    return 0;
}