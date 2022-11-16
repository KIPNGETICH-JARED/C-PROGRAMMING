// program to demostrate inheritance 
#include<iostream>
using namespace std;
// base class 
class grandfather{
    public:
    void farmer(){
        cout<<"I can farm"<<endl;
    }
    void blacksmith(){
        cout<<"I can Blacksmith"<<endl;
    }
};
//Derived class 
class father:public grandfather{
    public:
    void design(){
    cout<<"I can design"<<endl;
}
};
int main(){
    // create an object of class "father"
    father father1;
    // calling members of the base class
    father1.farmer();
    father1.blacksmith();
    // calling members of the derived class
    father1.design();
    return 0;}