#include<iostream> 
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(void)
{
    int day1, mon1, year1,
        day2, mon2, year2;

    int day_diff, mon_diff,year_diff;         

    cout<<"Enter start date (DD-mm-YYYY): ";
    cin>>day1>>mon1>>year1;

    cout<<"Enter end date (DD-mm-YYYY): ";
    cin>>day2>>mon2>>year2;

    if(day2 < day1)
    {      
        
        if (mon2 == 2)
        {
                day2 += 28;                           
        }

      
        else if (mon2 == 4 || mon2 == 6 || mon2 == 9 || mon2 == 11) 
        {
           day2 += 30; 
        }

        
        else
        {
           day2 += 31;
        }     
    }

    if (mon2 < mon1)
    {
        mon2 += 12;
        year2-=1;
    }       

    day_diff = day2 - day1;
    mon_diff = mon2 - mon1;
    year_diff=year2 - year1;

    cout<<"Difference:years="<<year_diff<<"months="<<mon_diff<<"days="<<day_diff;

    return 0; 
}

