//program to implement a class named addition 
#include<iostream> //preprocessor directive
using namespace std;//declarative region to provide scope for identifiers
class addition{//class name is addition
    //data members
    public:
    int j,k,l;//variable declaration
    //member function 
    int product(){
        return (j*k*l);
    }
};
//main function
int main(){
// creating an object of class addition
addition  addition1;
int j=addition1.j=22;//variable declaration and initialization
int k=addition1.k=30;//variable declaration and initialization
int l=addition1.l=50;//variable declaration and initialization
cout<<"the product is"<<addition1.product();//output the product
return 0;
}
