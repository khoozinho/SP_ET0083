#include <iostream>
using namespace std;

void entry(double temp[])
{
    for (int i=0;i<5;i++)
    {
        cout<< "Enter temperature: ";
        cin>> temp[i];
    }
}
void display(double temp[])
{
    cout<< "You have entered the following readings: ";
    for(int i=0;i<4;i++)
    {
        cout<<temp[i];
        cout<<", ";
    }
    cout<<temp[4];
}
void avg_temp(double temp[])
{
    double x,average;
    for (int i=0;i<5;i++)
    {
        x+=temp[i];
    }
    average=x/5;
    cout<<"\nAverage temperature is: ";
    cout<<average;
}
int main()
{
    double temp [5];
    cout << "Room Temperature Analysis" << endl;
    cout << "=========================" << endl;
    entry(temp);
    display(temp);
    avg_temp(temp);

    return 0;
}
