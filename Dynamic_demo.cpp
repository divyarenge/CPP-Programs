#include<iostream>
int main()
{
    int length =0;
    int *Arr=NULL;

    cout<<"Enter the Number of  Elements:\n";
    cin>>length;

    //step 1 Allocate the memory
    Arr=new int(length);
    if(Arr==NULL)
    {
        cout<<"Unable to allocate memory\n";

    }
    else{
        cout<<"Memory is allocated"

    }

    //step 2 Use the memory

    //Step 3 Delete memory
    delete [] Arr;

    return 0;
}