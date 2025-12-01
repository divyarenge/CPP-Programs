#include<iostream>
using namespace std;

float Summation(float Arr[],int iNo)
{
    int iCnt = 0.0f;
    float iSum = 0.0f;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        iSum = iSum + Arr[iCnt];

    }
    return iSum;
}

int main()
{
    float Brr[] = {10,20,30,40,50};
    float iRet = 0.0f;

    iRet = Summation(Brr,5);

    cout<<"Summation is: "<<iRet<<"\n";

    return 0;
}