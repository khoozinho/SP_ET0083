#include <iostream>
#define num 5 //Set the array size
using namespace std;

int main()
{
    cout<<"Marks above 80 is Graded A"<<endl;
    double mark[num]; int index;
    for (index = 0; index<num; index++)
    {
    cout<<"marks of the student : ";
    cin>>mark[index];
    }
    cout<<endl;
    for (index = 0; index<num; index++)
    {
        cout<<"Marks of the students : "<<mark[index]<<endl;
    }
    cout<<endl;
    double sum = 0;
    double average = 0;
    for (index = 0; index < num; index++)
    {
        sum = sum + mark[index];
    }
    cout<<"The total marks is "<<sum<<"marks"<<endl;
       average = sum / num;
    cout<<"The average marks is "<<average<<"marks"<<endl;
    int GradeA = 80;
    int numberA = 0;
    for (index = 0; index<num; index++)
    {
        if(GradeA <= mark[index])
                  numberA++;
    }
    cout<<"Number of students that scored grade A : "<<numberA;
    return 0;
}
