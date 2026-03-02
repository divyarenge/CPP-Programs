#include<iostream>
#include<stdio.h>

using namespace std;

int CountCapital(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital Letters in String : %d \n",iRet);

    return 0;
}