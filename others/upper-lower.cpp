#include <iostream>
// #include <cctype>      this should be included but in my case i got the output if this line is commented also.
using namespace std;
int main()
{
    string str = " HARRY MAGUIRE!!! CHRISTIANO RONAALDOOOOO 7 : SUIIIIIIIIIIIIIIIII";
    char ch;
    for (int i = 0; str[i] != '\0'; i++)
    { // This method is using a char to store the string char
        ch = tolower(str[i]);
        cout << ch;
    }
    return 0;
}

/*  Alternative Method :

    we can use type conversion in the cout only directly without using any extra char.
    ex:
        cout<<char(tolower(str[i]));

        (if we not changed the type it will show the integer output.)

*/