#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4,5};
    int n=5, flag=1;

    for(int i=0;i<n-1;i++)
    {
        if(a[i] > a[i+1])
        {
            flag=0;
            break;
        }
    }

    if(flag==1)
        cout<<"Array is Sorted";
    else
        cout<<"Array is Not Sorted";

    return 0;
}
