#include <iostream>

using namespace std;

class Counter
{
    private:
        int count = 0;

    public:
        Counter(int start)
        {
            count = start;
        }

        Counter()
        {
            count = 0;
        }

        Counter(Counter &c)
        {
            count = c.get_count();
        }

        void operator ++()
        {
            ++count;
        }

        void operator ++(int)
        {
            count++;
        }

        int get_count()
        {
            return count;
        }

        int operator+(const Counter &other)
        {
            int result =  this->count + other.count;
            return result;
        }

        int add(Counter &val)
        {
            return this->count + val.count;
        }
};


int main(void)
{
    Counter counter_obj(5);

    cout << "Value of counter_1: " << counter_obj.get_count() << endl;

    counter_obj++;

    cout << "Value of counter_1 after doing ++ : " << counter_obj.get_count() << endl;

    Counter counter_obj_2;
    counter_obj_2++;

    cout << "Value of counter_2 : " << counter_obj_2.get_count() << endl;

    cout << "Adding counter_1 and counter_2..." << endl;
    int sum = counter_obj + counter_obj_2;
    cout << "Sum is : " << sum << endl;

    int sumn = counter_obj.add(counter_obj_2);

    cout << "Sum with normal method : " << sumn << endl;

    return 0;
}