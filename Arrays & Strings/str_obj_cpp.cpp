#include <iostream>

using namespace std;


int main(void)
{
    string my_string;

    cout << "Enter the string : ";

    getline(cin, my_string);
    
    cout << "You entered : " << my_string << endl;

    my_string.append(" And you should learn it!");

    cout << my_string << endl;

    return 0;
}