#include<iostream>
using namespace std;

class Base
{
    public:
    int i,j;

    void fun()
    {
        cout<<"Inside Base fun()\n";
    }

};

class Derived : public Base
{
    public:
        int x;

        void gun()
        {
            cout<<"Inside gun()\n";
        }

};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<"Size of Base class object :"<<sizeof(bobj)<<"\n";
    cout<<"Size of Derived class object :"<<sizeof(dobj)<<"\n";
    
    return 0;
}
