#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    
    int day1,month1,year1;

    cout<<"enter the date(dd/mm/yy)";
    cin>>day1>>month1>>year1;

    cout<<month1<<"-"<<day1<<"-"<<year1<<endl;

    time_t ttime =time(0);
    tm *local_time = localtime(&ttime);
     
    1900 + local_time->tm_year;
    int year2 = 1900 + local_time->tm_year; 
    
    1 + local_time->tm_mon;
    int month2 = 1 + local_time->tm_mon;

    local_time->tm_mday;
    int day2 =local_time->tm_mday;      
    
    cout<<day2<<"-"<<month2<<"-"<<year2;

    if(day2<day1)
    {
        if(month2==2)
        {
            if((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
            {
                   day2+=29;
            }
            else
            {
                    day2+=28;
            }
        }   
        else if (month2 == 4 || month2 == 6 || month2 == 9 || month2 == 11) 
        {
           day2 += 30;
        }
        else
        {
           day2 += 31;
        }
    }// m2=m2-1; 

    if (month2 < month1)
    {
        month2 += 12;//12-m2+m1;
        year2 -= 1;
    } 

    int day3=day2-day1;
    int month3=month2-month1;
    int year3=year2-year1;

    cout<<"\nday="<<day3<<"month="<<month3<<"year="<<year3;
   
}
