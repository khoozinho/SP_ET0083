#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number=0;
    int a=0;
    int count=0; //loop control

    do
    {
    cout<< "Integer please: ";
    cin>> number;
    if (number!=0)
    {
            for(count=1;count<=10;count++)
            {
                cout << number << "x" << count << "=" << number*count<< endl;
            }
    }
    while (i!=0);

    cout << "End of loop";
    return (0);
}
