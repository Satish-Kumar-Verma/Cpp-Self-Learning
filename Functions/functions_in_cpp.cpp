// Two types of functions - Standard Library functions and user-defined functions

#include <iostream>
using namespace std;

int add(int, int); // Function prototype


int main(void)
{
    int a, b;
    cout << "Enter two integers : ";
    cin >> a >> b;

    cout << "Sum of " << a << " and " << b << " is : " << add(a, b) << endl;

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
