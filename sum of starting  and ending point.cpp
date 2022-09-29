// program to promt the user to enter number
#include<iostream>
using namespace std;
int main(){
 int i,j,k,sum=0;
 cout<<"Enter the starting point"<<endl;
 cin>>j;
 cout<<"Enter the ending point"<<endl;
 cin>>k;
 for(i=j;i<=k;i++){
     cout<<i<<endl;
 }
 sum=i+4;
 {
cout<<"The sum of the numbers " << j << " and " << k <<" is "  << sum;
}
return 0;
}