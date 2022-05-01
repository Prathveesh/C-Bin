#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter your string : " << endl;
    getline(cin, str); // taking input from the user using getline.
    string rev = "";

    int len = (int)str.length();
    rev.resize(len); // resizing the rev string from 0 to same length as str

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0'; // Adding the termiination operator at the end of rev.
    if (str == rev)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not Palindrome." << endl;
    }
    return 0;
}