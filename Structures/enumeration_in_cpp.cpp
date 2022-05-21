#include <iostream>

using namespace std;

enum week {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main(void)
{
    week today;
    today = Monday;

    cout << today << endl;
    cout << "Size : " << sizeof(today) << " Bytes" << endl;

    int temp = Sunday | Wednesday;

    cout << temp << endl;

    return 0; 
}