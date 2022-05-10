// Local variables  - only available inside the particular function and
//                    got destroyed when the functions exits.
 
// Global variables - is defined outside of all the functions and available 
//                    throughout the whole program and destroyed when the program exits.

// Static variables - exits only inside a function where it is declared but its
//                    lifetime starts when the function is called and ends when
//                    program exits.

#include <iostream>

using namespace std;


int global_var = 10; // global variable

int add(int a, int b)
{
    static int counter = 0; //static variable
    counter++;
    cout << "Counter : " << counter << endl;
    return a + b;
}
int main(void)
{
    int a = 15; // local variable
    cout << "Result : " << add(a, a) << endl;
    cout << "Result : " << add(a, a) << endl;
    cout << "Result : " << add(a, a) << endl;
    return 0;
}

    
