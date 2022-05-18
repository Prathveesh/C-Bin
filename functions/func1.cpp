// functions

#include <iostream>
using namespace std;

float add(float x, float y)
{
    return x + y;
}

int main()
{
    float x = 2.3, y = 3.3,z;
    z=add(x, y) ;
    cout<<z<<endl;
    return 0;
}