#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "The numbers are : ";

    for (const int &n : numbers) // use const int &n if you don't want to modify the original item
    {                            // use int &n if you want to modify the original item
        cout << n << " ";        // use int n if you want to modify the copies of original item
    }
    cout << endl;

    cout << "The numbers are : ";

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}