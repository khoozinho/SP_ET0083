#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int i;
   double table[2][3]={{4.2,2.5,-1.2},{2.8,-3.1,-1.2}},y=5.0;
   for(i=0;i<3;i++)
    y-=table[1][i];
}
