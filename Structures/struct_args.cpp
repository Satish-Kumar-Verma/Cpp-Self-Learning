#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
    int salary;
};
Person get_data(Person);
void display(Person);

int main(void)
{
    Person p;

    p = get_data(p);

    display(p);
    return 0;
}

Person get_data(Person p)
{
    cout << "Enter your full name : ";
    getline(cin, p.name);

    cout << "Enter your age : ";
    cin >> p.age;

    cout << "Enter your salary : ";
    cin >> p.salary;

    return p;
}

void display(Person p)
{
    cout << "Name : " << p.name << endl;
    cout << "Age : " << p.age << endl;
    cout << "Salary : " << p.salary << endl;
}