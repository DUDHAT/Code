#include<iostream>
using namespace std;
class cons
{
    int x;
    public:
    cons(int n)
    {
        x=n;
        cout<<"\n constructor called="<<x;
    }
};
int main()
{
    cons obj1=6,obj2=5;
}

    