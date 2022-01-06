#include<iostream>
using namespace std;
int main()
{
    void dosum(int,int);
    int a=10,b=20;
    dosum(a,b);
}    
void dosum(int x,int y)
{
    cout<<x+y;
}