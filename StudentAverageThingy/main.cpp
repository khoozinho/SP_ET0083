#include <iostream>
#define SIZE 5  //Set Array Size

using namespace std;

int main()
{
    //1.0 Declare Variables
    double marks [SIZE];
    int index;
    double sum=0;
    double average=0;
    int GradeA=0;

    //2.0 Get inputs into the array
    //2.0 Array + FOR LOOP
    for (index=0;index<SIZE;index++)
    {
            cout<<"Enter Marks:";
            cin>>marks[index];
    }//write into the array

    //2.1 Read into the array
    //2.1 array + FOR LOOP
    for(index=0;index<SIZE;index++)
        cout<<"Marks Entered:"<<marks[index]<<"\n"<<endl;

    //3.0 Compute sum of numbers in the array
    //3.0 Array +  FOR LOOP
    for (index=0;index<SIZE;index++)
        sum+=marks[index];

    average = sum/SIZE;

    cout << "\nAverage is " <<average<<endl;

    //4.0 Find number of A grades
    //ARRAY
    for(index=0;index<SIZE;index++)
    {
        if (marks[index]>=80)
            GradeA++;
    }
    cout<<"\nNumber of students with >80 is "<<GradeA<<endl;

    return 0;
}
