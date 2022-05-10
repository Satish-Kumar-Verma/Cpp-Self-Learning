#include <iostream>

using namespace std;

void my_fun(int a = 10, int b = 20) // (int c, int a = 1, int b) [invalid] | (int b, int c, int a = 1) [valid]
{
    cout << "A = " << a << ", B = " << b << endl;
}

int main(void)
{
    int a, b;
    cout << "Enter two integers : ";
    cin >> a >> b;

    my_fun(a, b);
    return 0;
}

// we cannot use function prototyping if we use default arguments in functions
// we must define the function before calling it if we use default arguments.
