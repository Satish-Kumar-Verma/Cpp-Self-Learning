#include <iostream>

using namespace std;

int num;

int& test();

int main(void)
{
    test() = 15;

    cout << "Global Var -> num : " << num << endl;

    return 0;
}

int& test()
{
    return num;
}