#include <iostream>
using namespace std;

#define TIME 60
int main()
{
    int total_mins, hours, mins;
    cout << "Enter time in minutes: ";
    cin >> total_mins;
    hours = total_mins/TIME;
    mins = total_mins%TIME;
    cout <<total_mins<<"mins is "<<hours<<":"<<mins;
    return 0;
}
