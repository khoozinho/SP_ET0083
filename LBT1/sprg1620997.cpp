#include <iostream>
#include <cmath>
using namespace std;

int main()

{
    //1.0 Declare variables
    double A,B,C,x,y,z;
    double sum=0;

    //2.0 Get inputs
    cout << "This program is to solve the mathematical formula " << endl;
    cout << "Input A ";
    cin >>  A;
    cout << "Input B ";
    cin >> B;
    cout << "Input C ";
    cin >> C;

    //3.0 Calculations
    x=5/C*C;
    y=sqrt((2*A)+B*B*B);
    z=((4*C*C)-5)*((4*C*C)-5);
    sum=x+(y/z);


    cout << sum;
    return 0;
}
