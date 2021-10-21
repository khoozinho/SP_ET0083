//Khoo Zhenyu
//DCPE/1A/23
//P1620997
//LAB TEST 4

#include <iostream>
#include <cmath>
using namespace std;

void entry(double values[]);
void display(double values[]);
double sum(double values[]);
//Additional function prototype when needed

int main()
{
    double values[6];
    cout << "Data Analysis" << endl;
    cout << "=============" << endl<<endl;
    entry(values);
    display(values);
    cout<< "\nSum of values that are more than 80 = "<<sum(values);
    // Call function to allow user to enter the readings
    // Additional function calls when needed
    return 0;
}
// Your functions here
void entry(double values[])
{
    int i;
    for(i=0;i<6;i++)
    {
        cout<<"Enter Reading "<<i+1<<": ";
        cin>>values[i];
    }
}
void display(double values[])
{
    int i;
    cout<< "You have entered the following readings: ";
    for(i=0;i<5;i++)
    {
        cout<<values[i];
        cout<<", ";
    }
    cout<<values[5];
}
double sum(double values[])
{
    int i;
    double total;
    for(i=0;i<6;i++)
    {
        if(values[i]>80)
            total +=values[i];
    }
    return(total);
}
