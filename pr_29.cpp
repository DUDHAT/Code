#include<iostream>
using namespace std;
class cons
{
    int x;
    public:
    cons(int n)
    {
        x=n;
        cout<<"\n constructor called"<<x;
    }
    ~cons()
    {

        cout<<"\n Desstructor called"<<x;
    }
    

};
int main()
{
    cons obj1(1),obj2(2);
}