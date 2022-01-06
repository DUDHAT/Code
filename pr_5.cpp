#include<iostream>
using namespace std;
int main()
{
    float unit,total;
    cout<<"enter the units";
    cin>>unit;
    if(unit==100)
    {
        total=(unit*0.60)+50;
        cout<<total;
    }
    else if(unit>=101 && unit<=300)
    {
        total=((unit-100)*0.80)+110;
        cout<<total;
    }
    else if(unit>=300)
    {
        total=((unit-300)*0.90)+270;
        if(total>300)
        {
            total=total*1.10;
            cout<<total;
        }
        else
        {
        cout<<total;
        }
    }         
}