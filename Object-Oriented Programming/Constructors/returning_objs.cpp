#include <iostream>

using namespace std;

class Student
{
    public:
        int maths_mark, eng_mark;

};

Student create_student(int math, int eng)
{
    Student s1;
    s1.eng_mark = eng;
    s1.maths_mark = math;
    return s1;
}

Student create_student(Student s)
{
    Student s2;
    s2.eng_mark = s.eng_mark;
    s2.maths_mark = s.maths_mark;

    return s2;
}

int main(void)
{
    int eng, math;

    cout << "Enter the eng marks : ";
    cin >> eng;

    cout << "Enter the maths marks : ";
    cin >> math;

    Student s = create_student(math, eng);

    cout << "Maths marks of student 1 : " << s.maths_mark << endl;
    cout << "Eng marks of student 1 : " << s.eng_mark << endl;

    Student s2 = create_student(s);
    cout << "Maths marks of student 2 : " << s.maths_mark << endl;
    cout << "Eng marks of student 2 : " << s.eng_mark << endl;

    return 0;
}