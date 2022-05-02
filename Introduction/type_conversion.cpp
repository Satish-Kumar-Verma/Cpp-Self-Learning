#include <iostream>

using namespace std;


int main()
{
    int a = 15;
    double b;
    // Implicit conversion or automatic convertion by compiler
    // Explicit conversion or manual conversion
    // b = (double)a; // c-style
    b = double(a); // function style

    cout << "The value of a is : " << a << endl;
    cout << "The value of b is : " << b << endl;

    return 0;
}