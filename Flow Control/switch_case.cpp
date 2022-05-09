#include <iostream>

using namespace std;


int main(void)
{
    int num = 11;

    switch (num % 2)
    {
        case 1:
        {
            cout << "It is an Odd number!" << endl;
            break;
        }

        case 0:
        {
            cout << "It is an Even number!" << endl;
            break;
        }

        default:
        {
            cout << "Wrong Input!" << endl;
            break;
        }
    }
}