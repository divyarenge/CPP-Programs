#include<iostream>
#include<stdio.h>

using namespace std;

int Summation(int Brr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    while(i < iSize)
    {
        iSum = iSum + Brr[i];
        i++;
    }

    return iSum;
}

int main()
{
    int iRet = 0;
    int Arr[] = {10, 20, 30, 40, 50};
    
    iRet = Summation(Arr,5);

    cout<<iRet<<"\n";

    return 0;
}