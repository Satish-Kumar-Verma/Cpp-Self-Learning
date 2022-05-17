#include <iostream>

#define SIZE 10

using namespace std;

void take_input(int [][SIZE], int);
void display_matrix(int [][SIZE], int);

int main(void)
{
    int matrix[SIZE][SIZE];
    int size;
    cout << "Enter the matrix size : ";
    cin >> size;

    take_input(matrix, size);

    display_matrix(matrix, size);

    return 0;
}

void take_input(int matrix[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void display_matrix(int matrix[][SIZE], int size)
{
    cout << "Displaying the matrix..." << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl << endl;
    }
}

// We must specify the number of columns if we use 2-d array...
