#include <iostream>

using namespace std;

int main()
{
    int values[2][3]={2,4,6,8,10,12};
    values[1][2]=values[0][1];
    cout<<values[1][2];
}
