#include <iostream>

using namespace std;


int main(void)
{
    int numbers[5];

    cout << "Enter five integers : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    cout << "The numbers are : ";

    for (int x : numbers)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}