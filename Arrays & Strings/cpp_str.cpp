#include <iostream>

using namespace std;


int main(void)
{
    char my_str[20];

    cout << "Enter your string : ";
    cin.get(my_str, 20);

    cout << "This is your string : \'" << my_str << "\'" << endl;

    return 0;
}