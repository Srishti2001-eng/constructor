# include <iostream>
# include <conio.h>
# include <string.h>
 using namespace std;
class str
{
    char *name;
    int len;
    public:
        str()
        {
            len=0;
            name=new char[len+1];
        }
        str(char *s)
        {
            len=strlen(s);
            name=new char[len+1];
            strcpy(name,s);
        }
        void show()
        {
            cout<<"NAME IS:->"<<name<<endl;
        }
        void join(str &a,str &b);
};

void str::join(str &a,str &b)
{
    len=a.len+b.len;
    delete name;
    name=new char[len+1];
    strcpy(name,a.name);
    strcat(name,b.name);
};

 int main()
{
    
    char *first="KIIT";
    str n1(first),n2("UNIVERSITY"),n3;

    n3.join(n1,n2);
    n1.show();
    n2.show();
    n3.show();
    
}