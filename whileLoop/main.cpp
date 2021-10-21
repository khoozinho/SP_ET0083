#include <iostream>

using namespace std;

int main()
{
    //1.0 Declare Variable
    int count; //loop control

    //2.0 Execute the loop 5 times
    count=1; // 2.1 Initialize loop control, i
    while(count<=20) //2.2 Loop decision
    {
        //Loop action
            if (count%2 == 1)
        cout << count << endl;
        count++; //2.3 Reinitialize the loop_control

    }//end_while
    cout<< "Outside the loop.\n";


    return 0;
}
