#include <iostream>

using namespace std;

int main(void)
{
    int arr[5];
    int sum = 0;
    int count = 0;
    double average = 0.0;

    cout << "Enter five integer elements : ";

    for (int &element : arr)
    {
        cin >> element;
    }

    cout << "The elements of the array : ";
    for (const int &x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    for (const int &x : arr)
    {
        sum += x;
        count++;
    }

    average = sum / count;

    cout << "Sum = " << sum << endl;
    cout << "Count = " << count << endl;
    cout << "Average = " << average << endl;

    return 0;
}

