#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    
    int day1,month1,year1;
    cout<<"enter the date(dd/mm/yy)";
    cin>>day1>>month1>>year1;
    cout<<month1<<"-"<<day1<<"-"<<year1<<endl;

    time_t day = time(0);
    time_t month=time(0);
    time_t year=time(0);

    char *dt = ctime(&day);
    dt = ctime(&month);
    dt = ctime(&year);
    
    cout<<"the utc data and time is :"<< month << endl;
    string a = dt; 
    cout<<a;
   
}
//gmtime