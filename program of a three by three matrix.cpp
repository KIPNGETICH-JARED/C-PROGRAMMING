//program of a three by three matrix;
#include<iostream>//preprocessor directive
using namespace std;//abbreviation for the standard
int main()//funtion that returns an integer
{
    //variable declaration and definition;
    int m[2][3][3]={
        {{1,2,3},{4,5,6},{7,8,9}},
        {{10,11,12},{13,14,15},{16,17,18}}
    };
    int i,j,k;
    // i represents the number of box matrices
    for(i=0;i<2;i++)
    {
        //using nested loops to get information  from the other groups;
        // j represents number of rows 
        for(j=0;j<3;j++)
        {
            // k represents the number of columns 
            for(k=0;k<3;k++)
            {
                //print out
                cout<<m[i][j][k]<<",";
            }
        }
    }
    return 0;
    }