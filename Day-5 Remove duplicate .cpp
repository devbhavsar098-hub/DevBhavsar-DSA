#include<iostream>
using namespace std;

int main()
{
    int a[]={1,1,2,2,3,4,4,5};
    int n=8, j=0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            a[j]=a[i];
            j++;
        }
    }

    a[j]=a[n-1];

    cout<<"Array after removing duplicates: ";
    for(int i=0;i<=j;i++)
        cout<<a[i]<<" ";

    return 0;
}
