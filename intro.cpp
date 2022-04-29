#include <iostream>
// #include <string.h>
using namespace std;
int main()
{

    // char s[10] = "Hello";
    // char r[10] = "World";
    // cout << s << endl;            // Hello
    // cout << strlen(s) << endl;    // 5
    // cout << r << endl;            // World
    // cout << strlen(r) << endl;    // 5
    // cout << strcat(s, r) << endl; // HelloWorld
    // cout << s << endl;            // HelloWorld
    char t[] = {'H', 'e', 'l', 'l', 'o', 0, 'a', 'b', 'c'}; // charecters a, ,b, c are not taken inside the string.since the null charecter occurred at the middle of the string it will take the charecters till null char after the null char anything is present will be discarded
    cout << t << endl;
    char *s = "World";
    cout << s;
    return 0;
}