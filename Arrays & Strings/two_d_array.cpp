#include <iostream>

using namespace std;

int main(void)
{
    int my_arr[3][3];
    
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> my_arr[i][j];
        }
    }

    cout << "Elements of the array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << my_arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    return 0;
}