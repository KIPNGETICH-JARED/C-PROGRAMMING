// program to check final grade
#include <iostream>
using namespace std;
int main()
{
int math,eng,kisw,chem,phyc,avg;
cout<<"Enter 5 marks for 5 units"<<endl;
cin>>math>>eng>>kisw>>chem>>phyc;
avg=(math+eng+kisw+chem+phyc)/5;
if(avg>70&& avg <=100)
{
    cout<<"grade A";
}
else if(avg>=60&& avg<=69)
{
cout<<"grade B";
}
else if(avg>=50 && avg<=59)
{
cout<<"grade C";
}
else if(avg>=40 && avg<=49)
{
cout<<"grade D";
}
else if(avg<40 && avg>=0)
{
cout<<"fail";
}
return 0;
}