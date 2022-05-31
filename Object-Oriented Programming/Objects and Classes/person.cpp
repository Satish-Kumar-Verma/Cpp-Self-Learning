#include <iostream>

using namespace std;


class Person
{
    public:
        string name;
        int age;
        string gender;


        string get_name()
        {
            return name;
        }

        int get_age()
        {
            return age;
        }

        string get_gender()
        {
            return gender;
        }
};


int main(void)
{
    Person p;
    string name, gender;
    int age;

    cout << "Enter your name : ";
    getline(cin, name);

    cout << "Enter your age : ";
    cin >> age;
    cin.ignore();

    cout << "Enter your gender : ";
    getline(cin, gender);

    cout << name << age << gender << endl;

    p.name = name;
    p.age = age;
    p.gender = gender;

    cout << "Name : " << p.get_name() << endl;
    cout << "Age : " << p.get_age() << endl;
    cout << "Gender : " << p.get_gender() << endl;

    return 0;
}