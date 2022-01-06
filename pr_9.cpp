#include<iostream>
using namespace std;
int main()
{
    int a[10],i;
    for(i=0;i<5;i++)
    {
        cout<<"a";
        cout<<i;
        cin>>a[i];

    }
    for(i=0;i<5;i++)
    {
        cout<<"\na: "<<i<<" "<<a[i];
    }
}