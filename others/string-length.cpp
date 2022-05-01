#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hello";
    int count = 0;

    string::iterator it;                            // Using string iterators.
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }

    cout << count;
    return 0;
}

/*  Alternative method :

    for(int i=0; str[i]!='\0'; i++){
    count++
}
*/