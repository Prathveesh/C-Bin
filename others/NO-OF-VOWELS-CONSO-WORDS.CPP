#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "How many words";

    int vowel = 0, conso = 0, space = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            conso++;
        }
    }
    cout << "Vowels = " << vowel << ", Consonents = " << conso << ", Words = " << space + 1 << endl;

    return 0;
}