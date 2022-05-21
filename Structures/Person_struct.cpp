#include <iostream>

using namespace std;

// use cin.ignore() to flush the extra newline character after the int input

struct Person
{
    string name;
    int age;
    string address;
};


int main(void)
{
    Person p;

    cout << "Enter your name : ";
    getline(cin, p.name);

    cout << "Enter your age : ";
    cin >> p.age;

    cin.ignore();

    cout << "Enter your address : ";
    getline(cin, p.address);

    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "Address : " << p.address << endl;

    return 0;
}