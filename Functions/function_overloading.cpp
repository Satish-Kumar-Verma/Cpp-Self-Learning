#include <iostream>

using namespace std;

void test()
{
    cout << "Function without argument!" << endl;
}

void test(int a)
{
    cout << "Function with an integer argument!" << endl;
}

void test(float a)
{
    cout << "Function with a float argument!" << endl;
}

void test(float a, int b)
{
    cout << "Function with float and int" << endl;
}

void test(int a, float)
{
    cout << "Function with int and float" << endl;
}

int main(void)
{
    int a = 10;
    float b = 10.5;

    test(b, a);
    return 0;
}
