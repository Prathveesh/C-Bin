// String Class
// So if we declare variable of type class, then we call that variable as an "object"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{ // 1)
    // string str; // here we use string class to initialize a string, and here str is called as an object.
    // cout << "Enter the String : " << endl;
    // getline(cin, str);
    // cout << str << endl;

    string s1 = "HelloWorld!";
    cout << s1.length() << " " << s1.size() << " " << s1.capacity() << endl; // 11 11 15
    s1.resize(30);
    cout << s1.capacity() << endl; // 30
    cout << s1.max_size() << endl; // 2147483647  
    // s1.clear();  //Makes zero
    cout << s1.empty() << endl; // 1 or 0

    return 0;
}