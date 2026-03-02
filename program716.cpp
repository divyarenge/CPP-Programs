#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1; 
    static int iSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        CheckPerfect(iNo);
    }

    return(iSum == iNo);   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter Number: \n";
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        cout<<"Given Number is Perfect\n";
    }
    else
    {
        cout<<"Given Number is Not Perfect\n";
    }

    return 0;
}