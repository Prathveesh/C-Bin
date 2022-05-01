#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str, username = "";
    cout << "Enter your Email ID : " << endl;
    getline(cin, str);

    int len = (int)str.length();
    username.resize(len); // resizing the username string to same as str.

    for (int i = 0; str[i] != '@'; i++) // for loop to get the char from 0 to the point where it encounters @ sign
    {
        username[i] = str[i];
    }
    username[len] = '\0'; // Terminating the username string after completing the process.
    cout << "Your Username is : " << username << endl;

    return 0;
}

/*  Alternative method :

    take input str;
    int i= (int)str.find('@');
    username = str.substr(0,i);

*/