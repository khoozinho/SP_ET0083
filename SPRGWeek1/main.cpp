#include <iostream>
#define ASIANBMI 23
using namespace std;

int main()
{//Start
    //1.0 Declare Variables
    double weight_kg,height_m;
    double bmi=0;

    //2.0 Get Inputs ==> Prompt First
    cout << "Enter your weight (kg)";
    // ii) read keyboard
    cin >> weight_kg;
    cout << "Enter your height (m)";
    cin >> height_m;

    //3.0 Compute BMI
    bmi=weight_kg/(height_m*height_m);

    //4.0 Display BMI
    cout<<"Your BMI is "<<bmi<<" kg/m^2"<<endl;

    /*5.0 Selection based on BMI vs ASIANBMI
    using if else statement. */
    if (bmi<=ASIANBMI)
        {
        cout<< "\nHealthy bmi\n";
        cout<< "\nGood Job!!!!!11!\n";
        }

    else
        cout<<"\nNot Healthy bmi\n";

    cout<<"\nGOODBYE!!!!!11!!2!!\n";

    return 0;
}//end
