#include <iostream>
using namespace std;
int main()
{
    string str = "gnimmargorp";

    string::reverse_iterator it;
    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it ;
    }

    return 0;
}

// string iterator  : it is used to traverse the string from begin to end.
// string::iterator <name>  :  first we have to initialize the iterator
//  for(<name>=string.begin(); <name>!=string.end(); <name>++){cout<<*<name>}  : we use begin() and end() function to get the starting and ending of a string
//  and the iterator is nothing but a pointer so we have to use astric operator(*)