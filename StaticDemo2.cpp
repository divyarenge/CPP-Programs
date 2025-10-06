#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int x;       //no memroy is given because of static TATAT FAKT i ANI j AHE x IS LIMBU CHI VATI

        Demo()
        {
            this->i = 0;
            this->j = 0;

        }
        
        Demo(int a , int b)
        {
            this->i = a;
            this->j = b;

        }

        void Fun()              // void Fun(Demo * const this)
        {
            cout<<"INside FUN \n";
            cout<<"Value of i is : "<<this->i<<"\n";
            cout<<"Value of j is : "<<this->j<<"\n";
            cout<<"Value of x is : "<<x<<"\n";
        }

        static void Gun()       //  static void Gun
        {
            cout<<"INside GUN \n";

        }
};
int Demo :: x = 11;

int main()
{
    Demo :: Gun();
    cout<<"Value of x is : "<<Demo::x<<"\n";

    Demo obj(10,20);
    obj.Fun();

    return 0;
}