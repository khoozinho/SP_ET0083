#include <iostream>
#include <fstream>
//#include <string>
using namespace std;
int AutismLevel(int x)
{
cout<<"Your score is "<<x;
}

int Scale(int Score[])
{
    int x=0;
    for(int i=0;i<5;i++)
    {
        x+=Score[i];
    }
    return x;
}

void testQuestions(int Score[])
{
    cout<<"Please put your rating from 0-5"<<endl;
    cout<<"I can stay calm under pressure: ";
    cin>>Score[0];
    cout<<"I maintain a sense of humor: ";
    cin>>Score[1];
    cout<<"I recognize how my behavior affect others: ";
    cin>>Score[2];
    cout<<"I can listen without jumping to judgment: ";
    cin>>Score[3];
    cout<<"I can freely admit to making a mistake: ";
    cin>>Score[4];
    int i;
    for (i = 0;i <= 4;i++)
    {
    if(Score[i] <0 ||Score[i] >5)
        cout<<"Invalid !, please retype your rating from 0 - 5"<<endl;
    return ;
    }
}

int main()
{
  ofstream TestResultsFile;
  TestResultsFile.open("TestResults.txt");
  int age;
  char gender;
  int Score[5];
  int ans;
  char name[30];
  string comment;
  cout<<"Welcome to the EQ test!!"<<endl;
  cout<<"========================"<<endl<<endl;
  cout<<"Enter your name: ";
  cin.getline(name, 30);
  cout<<"Enter your age: ";
  cin>>age;
  if(age<0||age>100)
  {
      cout<<"Sorry you are either too young or too old to take the test!!"<<endl;
      return 0;
  }
  cout<<"Enter your gender(M/F): ";
  cin>>gender;
 if(gender != 'M'&& gender != 'm'&& gender != 'F'&& gender != 'f')
  {
      cout<<"Invalid gender!!"<<endl;
      return 0;
  }
  TestResultsFile <<"Name: "<<name<<endl;
  TestResultsFile <<"Age: "<<age<<endl;
  TestResultsFile <<"Gender(M/F): "<<gender<<endl;
  testQuestions(Score);
  ans = Scale(Score);
  if( ans>=0&&ans <5)
    comment = "Unsympathetic";
  else if(ans >=5 && ans <10 )
    comment = "Subnormal";
  else if(ans >=10 && ans <15 )
    comment = "Normal";
  else if(ans >=15 && ans <20 )
    comment = "Above-average";
  else if(ans >=20 && ans <=25 )
    comment = "Gifted";
  cout<<"Remarks based on your score : "<<comment<<endl;
  TestResultsFile <<"Score : "<<ans<<"\nRemarks based on your score : "<<comment<<endl;
  AutismLevel(Scale(Score));
  ifstream infile;
  string a,b,c,d,e;
  infile.open("Gettestresult.txt");
  infile>>a>>b>>c>>d>>e;
  cout<<"\nBelow is the range";
  cout<<"\n"<<a<<endl;
  cout<<b<<endl;
  cout<<c<<endl;
  cout<<d<<endl;
  cout<<e<<endl;
  //testQuestions(Score);
}
