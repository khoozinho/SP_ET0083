#include <iostream>
#include <cmath>
//Function Prototype
int findSmallest(int num1, int num2, int num3);
int findLargest (int num1, int num2, int num3);
double findAverage (int num1, int num2, int num3);
using namespace std;

int main()
{
    //1.0 Declare local variables
    int num1, num2, num3, smallest;

    //2.0 Get inputs
    cout << "Enter the first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Enter the third number: " << endl;
    cin >> num3;

    //3.0 Processing
    smallest = findSmallest(num1, num2, num3);

    //4.0 Output
    cout << "The smallest number is: " <<smallest;
    return 0;
}

//Actual function
int findSmallest(int num1, int num2, int num3)
{//Start
    //1.0 Declare variables
    int smallest=num1;
    //2.0
    if (smallest>num2)
        smallest=num2;

    if (smallest>num3)
        smallest=num3;

    return(smallest);
}
