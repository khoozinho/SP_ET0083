#include <iostream>

using namespace std;

int main()
{
    double A,B;
    double sum1=0;
    double sum2=0;

    cout << "Volume of a cylinder" << endl;
    cout << "State radius" <<endl;
    cin >> A;
    cout << "State length" <<endl;
    cin >> B;
    sum1 = 3.142*A*A*B;
    cout << "Total volume of cylinder is " <<sum1<<endl;
    sum2 = 2*3.142*A*A+2*3.142*A*B;
    cout << "Total surface area of cylinder is "<<sum2<<endl;

    return 0;
}
