#include<iostream>
using namespace std;

class Demo
{
    public:
    //Overloading by changing the number of parameters
    void fun(int i, int j)      //fun(11,21)
    {}

    void fun(int i, int j, int k)       //fun(11,21,51)
    {}

    void gun(int i, double d)           //gun(10,10.5)
    {}

    void gun(double d, int i)           //gun(10.5,10)
    {} 

    void sun(char ch1, char ch2)        //sun('a','b')
    {}

    void sun(float f1, float f2)        //sun
    {}



};

int main()
{

    return 0;
}