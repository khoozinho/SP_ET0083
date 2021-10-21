#include <iostream>
#include <cmath>
#define PI
//A Function Prototype
void Area_Rect (int length,int breadth);
void Area_Triangle (int base,int height);
void Area_Circle (int radius);
using namespace std;

int main()
{
    //1.0  Declare Local Variable
    int num1,num2;
    //2.0 Get inputs
    cout << "Enter First Integer: ";
    cin >>num1;
    cout << "Enter Second integer: ";
    cin >>num2;
    //3.0 Processing using function Call (B)
    Area_Rect(num1,num2);
    Area_Triangle(num1,num2);
    Area_Circle(num1);
    Area_Circle(num2);

    cout<<"\nDONE\n\n";
    return 0;
}//END MAIN

//C Actual function
void Area_Rect(int length,int breadth)
{//Start
    //1.0 Declare variables
    int area=0;
    //2.0 Compute
    area=length*breadth;
    cout<<"\nArea of Rectangle is "<<area<<endl;
    return;
}//end_Area_rect

void Area_Triangle(int base,int height)
{//start
    //1.0 Declare local variable
    int area=0;
    //2.0 Compute
    area=1.0/2*base*height;
    cout<<"\nArea of Triangle is "<<area<<endl;
    return;
}

void Area_Circle(int radius)
{
    double area;
    area=PI*pow(radius,2);
    cout<< "\nArea of Circle is "<<area<<endl;
    return;
}
