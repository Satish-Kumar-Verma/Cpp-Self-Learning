#include <iostream>
using namespace std;

int factorial(int);

int main(void)
{
    int num;
    cout << "Enter a number to get the factorial of : ";
    cin >> num;

    cout << "Factorial of " << num << " is : " << factorial(num) << endl;

    return 0;
}

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }

    else
    {
        return num * factorial(num - 1);
    }
}