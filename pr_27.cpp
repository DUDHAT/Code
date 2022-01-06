#include<iostream>
using namespace std;
class test
{
    private:
    int x,y;
    public:
    void set(int a,int b)
    {
        x=a;
        y=b;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
};
int main()
{
    test t1,t2;
    t1.set(30,40);
    cout<<"\n x"<<t1.get_x();
    cout<<"\n y"<<t1.get_y();
    
}

