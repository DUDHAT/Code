#include<iostream>
#include<string.h>
using namespace std;
string name,gender,fever,chills,discomfartable,headche,vomiting,abdominal_pain,cough,fatigue,diarrhea;
int age,yes,no;
char ag;
void clinic_details()
{
    cout<<"\n.........jaya homeopathic clinic..............";

    cout<<"\n.........dr.jayaben(BHMS) && dr.magan(BHMS,MD)";

    cout<<"\n.........time 9.00 to 12.00 && 3.00 to 9.00.........";

    cout<<"\n...address:-23 shivam nagar sco,varachha road surat-395006...";

}
void patient_detail()
{
    //string name,gender;
    ///int age;
    cout<<"\nenter the name.....";
    cin>>name;
    
    cout<<"\nenter the age......";
    cin>>age;

    cout<<"\nenter the gender.....";
    cin>>gender;
}    
void question_ans()
{
  
    cout<<"\n do you have a Fever....";
    cin>>fever;
    cout<<"\n do you have a Chills...";
    cin>>chills;
    cout<<"\n do you have a General feeling of discomfortable...";
    cin>>discomfartable;
    cout<<"\n do you have a Headche...";
    cin>>headche;
    cout<<"\n do you have a Nausea && Vomiting...";
    cin>>vomiting;
    cout<<"\n do you have a Abdominal Pain...";
    cin>>abdominal_pain;
    cout<<"\n do you have a Cough...";
    cin>>cough;
    cout<<"\n do you have a Fatigue....";
    cin>>fatigue;
    cout<<"\n do you have a Diarrhea....";
    cin>>diarrhea;
}
void table()
{

    cout<<"\nName...."<<name;
    cout<<"\nAge....."<<age;
    cout<<"\nGender.."<<gender;
    cout<<"\n do you have a Fever.."<<fever;
    cout<<"\n do you have a Chills..."<<chills;
    cout<<"\n do you have a General feeling of discomfortable..."<<discomfartable;
    cout<<"\n do you have a Headche..."<<headche;
    cout<<"\n do you have a Nausea && Vomiting..."<<vomiting;
    cout<<"\n do you have a Abdominal Pain..."<<abdominal_pain;
    cout<<"\n do you have a Cough..."<<cough;
    cout<<"\n do you have a Fatigue...."<<fatigue;
    cout<<"\n do you have a Diarrhea...."<<diarrhea;
}

int main()
{
    void clinic_details();
    void patient_detail();
    void table();
    void question_ans();
    cout<<"fast time visit";
    clinic_details();
    patient_detail();
    question_ans();
    table();
    cout<<"\n................. scand time visit...................";
}