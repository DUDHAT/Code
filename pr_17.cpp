#include<iostream>
using namespace std;
int main()
{
    int day1,month1,year1,day2,month2,year2;
    
    cout<<"\nenter the date(dd/mm/year)";
    cin>>day1>>month1>>year1;
    
    cout<<"\nenter the today's date(dd/mm/year)";
    cin>>day2>>month2>>year2;
  
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
    cout<<"day="<<day3;
    cout<<"month="<<month3;
    cout<<"year="<<year3;   
}