#include<iostream>
using namespace std;
class test
{
    private:
    int x,y;

    public:
    int a=10,b=20;

    void testfunc()
    {
        x=a;
        y=b;
        cout<<"\nx="<<x<<"\n y="<<y;
    }
};   
int main()
{
    test t1,t2;
    
    t1.a=10;
    t1.b=20;

    t2.a=100;
    t2.b=120;
   
    t1.testfunc();
    t2.testfunc();
}