#include <iostream>
#define SIZE 5
//A. Function Prototype
void WriteArray(int x[]);
void ReadArray(int y[]);
using namespace std;

int main()
{
    int marks[SIZE];
    WriteArray(marks);
    ReadArray(marks);
    cout<<"\nEXIT!"<<endl;
    return 0;
}
//C Actual Function
void WriteArray(int x[1])
{
    //1.0 Declare local variables
    int index;
    //2.0 Write to the array (+FOR loop)
    for(index=0;index<SIZE;index++)
    {
        cout<<"Enter marks for student"<<index+1<<": ";
        cin>>x[index];
    }//for
    return;
}
void ReadArray(int y[])
{
    int index;
    for (index=0;index<SIZE;index++)
        cout<<"Marks for student "<<index+1<<": "<<y[index]<<endl;
    return;
}

