// lets see if ptr inside a ptr works
#include <iostream>
using namespace std;
int main()
{
    int **a;
    int m, n, i, j;
    cout << "Enter the row size : " << endl;
    cin >> m;
    cout << "Enter the col size : " << endl;
    cin >> n;
    a = (int **)calloc(m, sizeof(int *));
    for (i = 0; i < n; i++)
        *(a + i) = (int *)calloc(n, sizeof(int));
    cout << "Enter Array Elements : " << endl;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> *(*(a + i) + j);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << *(*(a + i) + j) << " \t";
        }
        cout << endl;
    }

    return 0;
}