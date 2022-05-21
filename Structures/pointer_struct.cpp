#include <iostream>

using namespace std;

struct Distance
{
    int feet;
    int inch;
};

int main(void)
{
    Distance *ptr, d;

    ptr = &d;
    // '.' has higher precedence than *
    // (*ptr).feet or ptr->feet [same]
    cout << "Enter the distance in feet : ";
    cin >> ptr->feet;

    cout << "Enter the distance in inches : ";
    cin >> ptr->inch;

    cout << "Distance in feet : " << d.feet << " feet" << endl;
    cout << "Distance in inches : " << ptr->inch << " inches" << endl;

    return 0;
}