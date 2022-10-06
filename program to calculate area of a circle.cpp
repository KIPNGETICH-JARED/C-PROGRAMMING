//program to find the area of a circle
#include<iostream>
using namespace std;
float circle(int r);//function prototype
int main(){
    int radius;
    float Area;
    cout<<"enter the radius"<<endl;
    cin>>radius;
    Area=circle(radius);//function calling
    cout<<"The area of a circle is"<<Area<<endl;
    return 0;}
  float circle (int r) {//function definition
   float area;
   area =3.142*r*r;
   return area;
}