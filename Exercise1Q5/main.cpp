#include <iostream>

using namespace std;
//Program to calculate sum of 3 INTEGER numbers

int main()
{
    //1.0 Declare Variables
    double A,B,C;
    double sum=0;

    cout<<"This is a summation of 3 numbers."<<endl;
    cout<<"Enter first number: " <<endl;
    cin >>A;
    cout <<"Enter second number: "<<endl;
    cin >>B;
    cout<< "Enter third number: "<<endl;
    cin >>C;
    sum = A+B+C;
    cout << "Sum is "<<sum<< endl;
    return 0;
}
