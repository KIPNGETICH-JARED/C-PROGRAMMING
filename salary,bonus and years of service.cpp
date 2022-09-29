// program to distribute bonus to employees
#include<iostream>
using namespace std;
int main()
{
    int salary,bonus,year;
  float netbonus;
  cout<<"enter salary"<<endl;
  cin>>salary;
  cout<<"number of years have served"<<endl;
  cin>>year;
  if(year>10)
  {
      netbonus=(salary*0.1);
      cout<<"your netbonus is" <<netbonus<<endl;
  }
  else if(year>=6 && year<=10)
  {
      netbonus=(salary*0.08);
      cout<<"your netbonus is" <<netbonus<<endl;
  }
  else if (year<6)
  {
      netbonus=(salary*0.05);
      cout<<"your netbonus is" <<netbonus<<endl; 
  }
  return 0;
}