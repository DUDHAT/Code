#include<iostream>
using namespace std;
int dosum()
{
    int a,b;
    cout<<"enter the values a";
    cout<<"enter the values b";
    cin>>a>>b;
    return a+b;
}
int main()
{
    int dosum();
    int c;
    c=dosum(); 
    cout<<"\n"<<c;  
}