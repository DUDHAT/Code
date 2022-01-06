#include<iostream>
#include<string.h>
#include<ctime>
using namespace std;

class bettery
{
    public:
    string ch;
    int no,day1,month1,year1;
    void name()
    {
        cout<<"                              enter the name......";
        cin>>ch;   
    }

 void date()
  {

    cout<<"\n1.bike";
    cout<<"\n2.petrol car";
    cout<<"\n3.diesel car";
    cout<<"\n4.tractor";
    cout<<"\nenter the number";
    cin>>no;

      
    int day1,month1,year1;

    cout<<"\n enter bettery buy date(dd/mm/yy)";
    cin>>day1>>month1>>year1;

    cout<<day1<<"-"<<month1<<"-"<<year1<<endl;

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
    int month4= month3+12*year3;
    cout<<"\n"<<month4;
     
    if(no==1)
    {
        cout<<"\n......bike";
        if(month4<=24)
        {
            cout<<"bettery replays";
        }
        else if(month4<=30)
        {
            cout<<"bettery 40% off "<<800*40/100;
        }
        else if(month4<=36)
        {
            cout<<"bettery 30% off"<<800*30/100;
        }
        else if(month4<=42)
        {
            cout<<"bettery 20% off"<<800*20/100;
        }
        else if(month4<=48)
        {
            cout<<"bettery 10% off"<<800*10/100;
        }
    }    
    else if(no==2)
    {
            cout<<"\n......pettol car";
        if(month4<=18)
        {
            cout<<"bettery replays";
        }
        else if(month4<=24)
        {
            cout<<"bettery 40% off "<<3200*40/100;
        }
        else if(month4<=30)
        {
            cout<<"bettery 30% off"<<3200*30/100;
        }
        else if(month4<=42)
        {
            cout<<"bettery 20% off"<<800*20/100;
        }
        else if(month4<=48)
        {
            cout<<"bettery 10% off"<<800*10/100;
        }
    } 
    else if(no==3)
    {
            cout<<"\n......diesel car";
        if(month4<=18)
        {
            cout<<"bettery replays";
        }
        else if(month4<=24)
        {
            cout<<"bettery 40% off "<<3200*40/100;
        }
        else if(month4<=30)
        {
            cout<<"bettery 30% off"<<3200*30/100;
        }
        else if(month4<=42)
        {
            cout<<"bettery 20% off"<<3200*20/100;
        }
        else if(month4<=48)
        {
            cout<<"bettery 10% off"<<3200*10/100;
        }
    } 
    else if(no==4)
    {
            cout<<"\n......tractor";
        if(month4<=18)
        {
            cout<<"bettery replays";
        }
        else if(month4<=24)
        {
            cout<<"bettery 40% off "<<4300*40/100;
        }
        else if(month4<=30)
        {
            cout<<"bettery 30% off"<<4300*30/100;
        }
        else if(month4<=42)
        {
            cout<<"bettery 20% off"<<4300*20/100;
        }
        else if(month4<=48)
        {
            cout<<"bettery 10% off"<<4300*10/100;
        }
    }   
    else if(no<=5)
    {
        cout<<"\nwrong choice";
    }
  }
};
 int main()
{
    bettery b1,b2;
    b1.name();
    b1.date();

}
