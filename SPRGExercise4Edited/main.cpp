#include <iostream>

using namespace std;

int main()
{
   //1.0 Declare variables
    double R1,R2,TotalR=0;
    char Choice;

    //2.0 Display menu
    cout<< "This is a program to calculate equivalent resistance, ";
    cout<< "For both: \n1. Series and \n2. Parallel.\n";

    //3.0 Get Inputs
    cout<< "\nEnter your choice: ";
    cin>> Choice;
    cout<< "Please input value of the first resistor: ";
    cin>> R1;
    cout<< "Please input value of second resistor: ";
    cin>> R2;

    //4.0
    switch (Choice)
    {
    {
        case '1':
        TotalR=R1+R2;
        cout<< "The equivalent resistance for series is "<<TotalR<<" ohms"<<endl;
        break;

        case '2':
        TotalR=(R1*R2)/(R1+R2);
        cout<< "The equivalent resistance for parallel is "<<TotalR<<" ohms"<<endl;
        break;
    }

        default:
        cout<<"\nPlease enter 1 or 2 only!\n\n";
        break;
    }


        cout<<"\n**** Goodbye ****\n\n";

    return 0;

}
