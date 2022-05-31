#include <iostream>

using namespace std;


class Field
{
    private:
        int length;
        int width;

    public:
        Field(int len, int wid)
        {
            length = len;
            width = wid;
        }

        Field(Field &f)
        {
            length = f.length;
            width = f.width;
        }

        int calculate_area()
        {
            return length * width;
        }

};


int main(void)
{
    int length, width;

    cout << "Enter the length : ";
    cin >> length;

    cout << "Enter the width : ";
    cin >> width;

    Field field_obj1(length, width);

    cout << "Area of the field 1 : " << field_obj1.calculate_area() << endl;

    Field field_obj2(field_obj1);

    cout << "Area of the field 2 : " << field_obj1.calculate_area() << endl;

    return 0;
}