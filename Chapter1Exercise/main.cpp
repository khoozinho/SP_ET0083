#include <iostream>

using namespace std;

int main()
{
   //1.0 Declare variables
   double A,B;
   double sum=0;

   cout<< "Area of a right-angled triangle. Enter base ";
   cin>> A;
   cout<< "Enter height of triangle ";
   cin>> B;
   sum= A*B*0.5;
   cout<< "Area of right sided triangle is "<<sum<< endl;
   return 0;
}
