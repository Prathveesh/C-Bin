#include <iostream>
// #include <typeinfo>  //for using typeid().name() function
#include <cstring> //Used to get the string Functions
using namespace std;
int main()
{
    // char s1[] = "1234";
    // char s2[] = "23.45";
    // long int x = strtol(s1, NULL, 10);
    // float y = strtof(s2, NULL);
    // cout << s1 << "--->" << x << endl;
    // cout << s2 << "--->" << y << endl;
    // cout << typeid(x).name() << endl; // can be used to get the type of the variable
    // cout << typeid(y).name() << endl; // can be used to get the type of the variable

    char s1[] = "x=10;y=20;z=35";
    char *token = strtok(s1, "=;"); //String tokenizer 
    while (token != 0)
    {
        cout << token << endl;
        token = strtok(0, "=;");
    }

    return 0;
}
