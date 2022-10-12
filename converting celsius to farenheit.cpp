// program to convert degrees celsius to farenheit
#include<iostream>
using namespace std;
float temp(int r); //function prototype
float celsius;
 float farenheit;
int main()
{
    float farenheit;
    float celsius;
    cout<<"enter temperature in celsius"<<endl;
    cin>>celsius;
    celsius=temp (farenheit); //function calling
    cout<<"The temp is"<<celsius<<endl;
    return 0;}
    float temp(int r) //function definition
    {
        float celsius;
    celsius=0.556*(farenheit-32);
    return celsius;
    }