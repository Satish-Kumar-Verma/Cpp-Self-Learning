#include <iostream>

using namespace std;

void display_marks(int [], int);
int main(void)
{
    int marks[] = {100, 98, 97, 94, 91, 99};
    int size = 6;

    display_marks(marks, size);

    return 0;
}

void display_marks(int marks[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Student - " << i + 1 << " : " << marks[i] << endl;
    }
}