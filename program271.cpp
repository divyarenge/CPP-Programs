#include<iostream>
using namespace std;

template <class T>
T Summation(T Arr[],int iNo)
{
    int iCnt = 0.0f;
    T iSum ;            //change

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + Arr[iCnt];

    }
    return iSum;
}

int main()
{
    float Brr[] = {10.5,20.5,30.2,40,50};
    float iRet = 0.0f;

    iRet = Summation(Brr,5);

    cout<<"Summation is: "<<iRet<<"\n";

    return 0;
}