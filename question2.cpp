#include <iostream>
using namespace std;

class Time1
{
    int hh;
    int mm;

public:
    Time1(int h, int m = 0)
    {
        hh = h;
        mm = m;
    }
    void print()
    {
        cout << hh << ":" << mm <<endl;
    }
};

int main()
{
    Time1 t1(8), t2(2, 9);
    t1.print();
    t2.print();
    return 0;
}
