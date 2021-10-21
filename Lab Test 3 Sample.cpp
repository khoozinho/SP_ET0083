/*This program will ask user to guess a number
   Hints will be given if the anwer is wrong
   User has 5 chance to get it correct
*/
#include <iostream>                                                     //Line 5
using namespace std;                                                    //Line 6
#define answer = 456                                                    //Line 7
int main()                                                              //Line 8
{                                                                       //Line 9
    int i, num;                                                         //Line 10
    char choice;                                                        //Line 11
    cout << "Number Guessing Game"<<endl;                               //Line 12
    cout << "===================="<<endl;                               //Line 13
    cout << "Guess a number between 0 to 999\n";                        //Line 14
    do                                                                  //Line 15
    {                                                                   //Line 16
        for (i=0, i<5, i++)                                             //Line 17
        {                                                               //Line 18
            cout << "Enter a number: ";                                 //Line 19
            cin >> num;                                                 //Line 20
            if (num = answer)                                           //Line 21
                break;                                                  //Line 22
            if (num > answer)                                           //Line 23
                cout << "Attempt: "<<i+1<<" - Too big!\n";              //Line 24
            else                                                        //Line 25
                cout << "Attempt: "<<i+1<<" - Too small!\n";            //Line 26
        }                                                               //Line 27
        ;if (i<5)                                                        //Line 28
        {                                                               //Line 29
            cout << "\nCorrect! You are good!" << endl;                 //Line 30
            break;                                                      //Line 31
        }                                                               //Line 32
        else                                                            //Line 33
            cout << "\nTry harder next time!" << endl;                  //Line 34
        cout << "\nYou want to play again(Y/N)?";                       //Line 35
        cin >> choice;                                                  //Line 36
    } while (choice == 'Y' && choice == 'y');                           //Line 37
    return 0;                                                           //Line 38
}                                                                       //Line 39
