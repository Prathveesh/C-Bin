#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s1 = "Hello";
    string s2 = "World";

    s2.replace(3, 1, "ooo");

    cout << s2 << endl;

    return 0;
}

/*
s1.append("*string")
s1.insert(place,"*string")
s1.push_back()
s1.pop_back()
s1.replace(place,how_many_char,"*string")
s1.erase()
s1.swap(s2)
*/