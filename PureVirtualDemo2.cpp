#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        int Addition(int a, int b)      //concrete
        {
            return a+b;
        }
        virtual int Substraction(int a, int b)=0;       //Abstract

};
class Derived : public Base         //ERROR
{
    public :
        int x;
        int Substraction(int a, int b)      //Concrete
        {
            return a-b;
        }
        int Multiplication(int a, int b)      //Concrete
        {
            return a*b;
        }
};
int main()
{
    Base *bp = new Derived();

    int iRet=0;

    iRet= bp->Addition(11,10);
    iRet= bp->Substraction(11,10);
    iRet= bp->Multiplication(11,10);


    return 0;
}