#include<iostream>
#include<conio.h>

using namespace std;
class COMPLEX
{
    int real;
    int img;
    public:
    COMPLEX()
    {
        real=img=10;
    }
    COMPLEX(int a,int b)
    {
        real=a;
        img=b;
    }
    COMPLEX(const COMPLEX &x)
    {
        real=x.real;
        img=x.img;
    }

    void print()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};

int main()
{
    COMPLEX c1,c2(4,5),c3(8,9);
    c1.print();
    c2.print();
    c3.print();
}
