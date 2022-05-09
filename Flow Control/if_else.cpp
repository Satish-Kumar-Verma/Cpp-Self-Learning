#include <iostream>

using namespace std;


int main(void)
{
    int a = 10;
    int b = 15;

    if (a > b)
    {
        cout << "A is greater than B." << endl;
    }
    
    else if (a == b)
    {
        cout << "A is equal to B." << endl;
    }
    else
    {
        cout << "B is greater than A." << endl;
    }

    return 0;
}