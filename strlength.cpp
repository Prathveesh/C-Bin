#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[50];
    cout << "Enter the String : " << endl;
    cin.getline(s, 50);

    cout << "Length of the given String is : " << strlen(s) << endl;

    return 0;
}