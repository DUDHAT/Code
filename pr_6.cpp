#include<iostream>
using namespace std;
int main()
{   
    int i,j,sp=90,k=65;
    for(i=69;i>=65;i--)
    {
        for(j=65;j<=sp;j++)
        {
           cout<<" ";
        }
        for(j=65;j<=i;j++)
        {
            cout<<char(k++);
        }
        cout<<"\n";
    }
}