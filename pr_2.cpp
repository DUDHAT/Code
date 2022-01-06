#include<iostream>
using namespace std;
class print
{   
    public:
    int r,c;
    void ff()
    {
        c=r*r*3.14;
        cout<<"c="<<c;
    }
};
int main()
{
    print t1;
    t1.r=10;
    t1.ff();
    
}