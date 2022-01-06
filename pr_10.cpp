#include<iostream>
using namespace std;
int fun(int a,int b)
{
        cout<<a+b<<"\n";
        return(a+b); 
}
int carcal(int r)
{
        cout<<r*r*3.14<<"\n";
        return(r*r*3.14);
}
int main()
{
    int a=100,b=20;
    int s;
    s=fun(a,b);
    int r=10;
    s=carcal(r);
}

   