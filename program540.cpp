#include<stdio.h>
int main()
{
    char str[80];
    char Command[4][20];

    char Arr[] = "India is My Country";

    sscanf(Arr,"%s %s %s %s",Command[0],Command[1],Command[2],Command[3]);

    return 0;
}