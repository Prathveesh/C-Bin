#include <iostream>
using namespace std;
int main()
{
    // 1)
    //  char S[15];
    //  cout << "Enter your name : " << endl;   // John Cena
    //  cin >> S;                               // Problem with using this is it only takes the input untill a space is given,if we have two words in the input then it only takes first input.
    //  cout << "Your name is : " << S << endl; // John

    // 2)
    char R[15];
    cout << "Enter your name : " << endl;   // John cena
    cin.getline(R, 15);                     // or cin.get(R,15);
    cout << "Your name is : " << R << endl; // John cena
    return 0;
}