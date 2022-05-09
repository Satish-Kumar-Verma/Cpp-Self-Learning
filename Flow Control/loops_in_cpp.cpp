#include <iostream>

using namespace std;


int main(void)
{

    // for (int a = 1; a <= 10; ++a)
    // {
    //     cout << "A is " << a << endl;
    // }

    int a = 1;
    
    // while (a <= 10)
    // {
    //     cout << "A is " << a << endl;
    //     a++;
    // }
    
    do 
    {
        if (a == 9)
        {
            break;
        }
        else if (a == 7)
        {
            a++;
            continue;
        }
        else if(a == 5)
        {
            goto here;
        }
        cout << "A is " << a << endl;
        a++;
    }while(a <= 10);

here:

    return 0;
}

